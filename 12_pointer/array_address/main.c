#include <stdio.h>
#include <string.h>
 
int main()
{
    char name[51];
    strcpy(name,"C语言技术网(www.freecplus.net)");

    printf("%p\n",name);
    printf("%p\n",&name);
    printf("%p\n",&name[0]);
    
    printf("%s\n",name);
    printf("%s\n",&name);
    printf("%s\n",&name[0]);
}