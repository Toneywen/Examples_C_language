#include <stdio.h>

int main()
{
    int  age=0;  // 年龄
    int  height=0;  // 身高，单位：厘米cm
    int  sc=0;  // 身材，1-火辣；2-普通；3-飞机场。
    int  yz=0;  // 颜值，1-漂亮；2-一般；3-歪瓜裂枣。
    
    printf("请输入年龄、身高、身材（1-火辣；2-普通；3-飞机场）：");
    scanf("%d %d %d",&age,&height,&sc);
    printf("请输入颜值（1-漂亮；2-一般；3-歪瓜裂枣）：");
    scanf("%d",&yz);
    
    if ( (age >= 25) && (age <= 30) )  // 年龄在25-30之间
    {
        if ( (height >= 165) && (height <= 175) )  // 身高在165-175之间
        {
        if (sc == 1)    // 身材，1-火辣
        {
            if ( (yz == 1) || (yz == 2) )  // 颜值，1-漂亮或者2-一般
            {
            printf("超女选秀合格，送往后宫。\n"); return 0;
            }
        }
        }
    }
    printf("超女选秀不合格，发放五两银子后送回家。\n");
}