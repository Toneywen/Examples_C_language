#include <stdio.h>
#include <string.h>
 
int main()
{
    int errorno;
    
    for(errorno=0;errorno<132;errorno++)
    {
        // strerror表示将error number转换为字符串描述
        printf("%d:%s\n",errorno,strerror(errorno));
    }
}