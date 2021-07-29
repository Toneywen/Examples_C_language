#include <stdio.h>
#include <string.h>
int main()
{
    char str[10][31];
    int counter = 10;
    int i = 0;
    memset(str, 0, sizeof(str));

    for (i = 0;i < 10; i ++){
        printf("请输入一个字符串：");
        scanf("%s",str[i]);
    }

    for (i = 0; i < counter; i++){
        printf("%s\n",str[i]);
    }

    return 0;
}