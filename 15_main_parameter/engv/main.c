#include <stdio.h>
 
int main(int argc,char *argv[],char *envp[])
{
    int ii = 0;
    
    while (envp[ii] != 0)  // 数组最后一个元素是0
    {
        printf("%s\n",envp[ii]); 
        ii++;
    }
}