#include <stdio.h>
 
int main(int argc,char *argv[])
{
    if (argc!=6)
    {
        printf("\n这是一个超女选秀程序，根据提供的超女信息，判断"\
            "她是否符合王妃的标准。\n\n");
        printf("用法：./book103 name age height sc yz\n");
        printf("例如：./book103 西施 22 170 火辣 漂亮\n");
        printf("name   超女的姓名。\n");
        printf("age    超女的年龄。\n");
        printf("height 超女的身高，单位：cm。\n");
        printf("sc     超女的身材，火辣；普通；飞机场。\n");
        printf("yz     超女的颜值，漂亮；一般；歪瓜裂枣。\n\n");
    
        return -1;
    }
    
    printf("您输入的超女信息是：姓名（%s）,年龄（%s），身高（%s），身材（%s），颜值（%s）。\n",\
            argv[1],argv[2],argv[3],argv[4],argv[5]);
    
    printf("正在计算中，请稍候......\n");
    
    if (((atoi(argv[2]) >=  20) && (atoi(argv[2]) <=  30)) &&  // 年龄在20-30之间
        ((atoi(argv[3]) >= 165) && (atoi(argv[3]) <= 175)) &&  // 身高在165-175之间
        ((strcmp(argv[4],"火辣")==0)                     ) &&  // 身材火辣
        ((strcmp(argv[5],"漂亮")==0)                     ))    // 颜值漂亮
    {
        printf("超女（%s）选秀合格，送往后宫。\n",argv[1]); return 0;
    }
    else
    {
        printf("超女（%s）选秀不合格，发放五两银子后送回家。\n", argv[1]); return 0;
    }
}