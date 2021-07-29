#include "public.h"  // 把_public.h头文件包含进来
 
int main()
{
    int xx,yy,imin,imax;
    
    xx=50; yy=80;
    
    imin=min(xx,yy);
    imax=max(xx,yy);
    
    printf("imin=%d,imax=%d\n",imin,imax);
}