#include <stdio.h>

int main(){
    int ii=0;         // 超女分组编号的计数器
    int jj=0;         // 每组超女序号的计数器
    
    for (ii=1;ii<=3;ii++){
        for (jj=1;jj<=4;jj++){
            printf("第%d组的第%d位超女出场。\n",ii,jj);
        }
    }
}