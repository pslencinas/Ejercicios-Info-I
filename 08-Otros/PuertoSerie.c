/**********************************
 *
 *  Acceso al Serie bajo windows
 *
 **********************************/


// Incluyo la biblioteca de Win32
#include <windows.h>
#include <stdio.h>

int main()
{
  // Declaro Variables
  HANDLE comHandle;  		// Puntero al Puerto Serie
  BOOL success;  			// Variable para el retorno
  DCB dcb; 					// Estructura para configurar el puerto serie
  char str[100]; 			// Un bufer para recibir datos
  DWORD numWrite, numRead;  // Variables de 16bits que guardan numeros
  COMMTIMEOUTS timeouts; 	// Estructura de Timeout

   // Ahora voy a abrir el puerto. El primer parametro es un string que indica que puerto quiero abrir,
   // Para encontrar los puertos, dentro del registro de windows en HKEY_LOCAL_Machine\Hardware\Devicemap\Serialcomm
   comHandle = CreateFile((TCHAR *)"COM1",GENERIC_READ|GENERIC_WRITE,0, 0, OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL, 0);
   if (comHandle == INVALID_HANDLE_VALUE)
   {
     printf("Error en el Create File\n");
     exit(1);
   }
   // Busco el estado del puerto serie
   success = GetCommState(comHandle, &dcb);
   if (!success)
   {
     printf("No pude obtener el estado\n");
     exit(1);
   }
   // Ahora cargamos esa estructura DCB con los valores que nos importan
   dcb.BaudRate = 9600;
   dcb.ByteSize = 8;
   dcb.Parity = NOPARITY;
   dcb.StopBits = ONESTOPBIT;
   // Seteo el Serie
   success = SetCommState(comHandle, &dcb);
   if (!success)
   {
     printf("Error seteando el serie\n");
   }

   // Seteo los timeout
   timeouts.ReadIntervalTimeout = MAXDWORD;
   timeouts.ReadTotalTimeoutMultiplier = 1;
   timeouts.ReadTotalTimeoutConstant = 0;
   timeouts.WriteTotalTimeoutMultiplier = 0;
   timeouts.WriteTotalTimeoutConstant = 0;
   SetCommTimeouts( comHandle, &timeouts );

   // Ahora mando una S mayuscula por el serie
   strcpy(str, "S");
   success = WriteFile(comHandle, str, strlen(str), &numWrite, 0);
   if (!success)
   {
     printf("Error transmitiendo\n");
     exit(1);
   }

   // Ahora leo el serie
   success = ReadFile(comHandle, str, 4, &numRead, 0);
   if (!success)
   {
     printf("Error leyendo\n");
     exit(1);
   }

   // Muestro lo que llega
    str[numRead]='\0';
   printf("%s\n",str);

   return 1;
}


