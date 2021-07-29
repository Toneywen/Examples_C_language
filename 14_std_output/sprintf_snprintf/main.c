#include <stdio.h>
#include <string.h>
 
int main()
{
    char str[301];

    // 格式化输出到str中
    sprintf(str,"%d,%c,%lf,%s",10,'A',25.97,"一共输入了三个数。");
    printf("%s\n",str);

    sprintf(str,"aaa""bbb""ccc");
    printf("%s\n",str);
    // 格式化输出到str中，只截取前7个字符 (n-1)
    snprintf(str,8,"%d,%c,%lf,%s",10,'A',25.97,"一共输入了三个数。");
    printf("%s\n",str);
}