#include <windows.h>

#include <stdio.h>

#include <conio.h>

#include <stdlib.h>

 

int com (void);

HANDLE init();

 

int escucha(HANDLE, char *);

//leerpuerto(string);

 

 

 

void main (void)

{

HANDLE comunicacion;

int contador, j, dni[8];

char str[100];



comunicacion = init();

 

 

system("cls");

printf ("ESPERANDO UNA TECLA\n");

while (escucha(comunicacion, str));

printf ("TECLA PRESIONADA EN MAIN: %s\n", str);

puts (str);

printf ("SALIO\n");

/*

printf ("Ingresar DNI: ");

for (contador=0; contador<8; contador++)

    {

    dni[contador]= com();

    }

for (contador=0; contador<8; contador++)

    {

    printf ("DNI: %d", dni[contador]);

    }

*/

system("PAUSE");

}

 

HANDLE init()

{

     HANDLE comHandle;  // Puntero al Puerto Serie

  BOOL success;  // Variable para el retorno

  DCB dcb; // Estructura para configurar el puerto serie

  char str[100]; // Un bufer para recibir datos

  DWORD numWrite, numRead;  // Variables de 16bits que guardan numeros

  COMMTIMEOUTS timeouts; // Estructura de Timeout

  int i=1, seguir=0;

  char numero[1];

 

 

   // Ahora voy a abrir el puerto. El primer parametro es un string que indica que puerto quiero abrir,

   // Para encontrar los puertos, dentro del registro de windows en HKEY_LOCAL_Machine\Hardware\Devicemap\Serialcomm

   comHandle = CreateFile("COM6",GENERIC_READ|GENERIC_WRITE,0, 0, OPEN_EXISTING,FILE_ATTRIBUTE_NORMAL, 0);

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

return comHandle;

 

}

 

 

int escucha(HANDLE comHandle, char *p)

{

char str[100];

int retorno=1;

DWORD numRead;

BOOL success;

strcpy(str, "CERO");

success = ReadFile(comHandle, str,4, &numRead, 0);

 

   if (!success)

   {

     printf("Error leyendo\n");

     exit(1);

   }

    if (strcmp (str, "CERO"))

    {

    printf ("ENTRO EN LA COMPARACION\n");

    str[numRead]='\0';

    retorno=0;

    printf ("TECLA APRETADA EN LA FUNCION %s\n", str);

    *p= str;

 

    //printf ("*P: %s", *p);

    //strcpy(*p, str);

    }

    //retorno=0;

//    numero=str[0];

    //}

 

   return retorno;

}