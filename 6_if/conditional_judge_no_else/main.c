#include <stdio.h>

int main()
{
    int    yz=0;  // 定义一个整数变量存放超女的颜值：1-漂亮；2-一般
    int    money=2000;  // 发放路费的基本金额
    
    printf("请问超女的颜值（1-漂亮；2-一般）：");
    scanf("%d",&yz);  // 接受用户从键盘输入的数据
    
    if (yz == 1)
    {
        // 如果超女颜值漂亮，多给500元的路费
        money=money+500;
    }
    
    printf("此超女发放金额为%d元。\n",money);

    return 0;
}