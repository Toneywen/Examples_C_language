#include <stdio.h>
#include <string.h>
 
// 判断超女身材函数的声明
// 函数名：checksc
// 参数：height，身高，单位cm。
// 返回值：0-不合格；1-娇小；2-标准；3-高挑
int checksc(int height);
 
int main()
{
    int ii,jj;
    
    printf("请输入超女的身高（单位：厘米）：");
    scanf("%d",&ii);
    
    jj=checksc(ii);   // 调用checksc函数判断身材
    
    if (jj==0) printf("不合格。\n");
    if (jj==1) printf("娇小。\n");
    if (jj==2) printf("标准。\n");
    if (jj==3) printf("高挑。\n");
}
 
// 判断超女身材函数的定义
int checksc(int height)
{
    if ( (height>=160) && (height<165) ) return 1;  // 娇小
    if ( (height>=165) && (height<175) ) return 2;  // 标准
    if ( (height>=175) && (height<180) ) return 3;  // 高挑
    
    return 0;   // 不合格
}