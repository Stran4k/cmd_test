#include "stdio.h"


// Source - https://stackoverflow.com/a/5280144
int main (int argc, char **argv)
{
    for(int i = 0;i< argc;i++) 
        printf("%s\r\n",argv[i]);
        
printf("%s\r\n","\nEnd...");
}
/*
 * 
 * 
 * 
 * 
 * gcc main.c -o test1.exe 
 *  сбока .exe с именем 
 * 
 * ./test1 -a -s ds
 *  запуск .exe с параметрами строки
 * out : -a -s ds End...
 *  вывод test1.exe
 * 
 * cd D:
 *  Открывает искомый диск
 * 
 * cd \_Visual_Studio_Project\C
 *  Открвть католог (папку/и)
 * 
 * cd .. 
 *  Возврат в родительскую папку
 * 
 * 
 *          Git
 * 
 * 
 * 
 * 
 */