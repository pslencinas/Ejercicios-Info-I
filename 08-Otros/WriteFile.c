#include <windows.h>
#include <stdio.h>

int main (void)
{

    char DataBuffer[] = "This is some test data to write to the file.";
    DWORD dwBytesToWrite = (DWORD)strlen(DataBuffer);
    DWORD dwBytesWritten = 0;


    HANDLE out = CreateFile("C:\\testWriteFile.txt",    // name of the write
                           GENERIC_WRITE,               // open for writing
                           0,                           // do not share
                           NULL,                        // default security
                           CREATE_NEW,                  // create new file only
                           FILE_ATTRIBUTE_NORMAL,       // normal file
                           NULL);                       // no attr. template

    WriteFile ( out, DataBuffer, dwBytesToWrite, &dwBytesWritten, NULL );
    CloseHandle ( out );
    return 0;
}
