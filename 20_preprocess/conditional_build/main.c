#define LINUX
 
int main()
{
  #ifdef LINUX
    printf("这是Linux操作系统。\n");
  #else
    printf("未知的操作系统。\n");
  #endif
}