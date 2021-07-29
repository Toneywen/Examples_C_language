#include <stdio.h>
#include <string.h>

struct st_girl
{
  char name[51];   // 姓名
  int  age;        // 年龄
  int  height;     // 身高，单位：cm
  double weight;     // 体重，单位：kg
  char sc[31];     // 身材，火辣；普通；飞机场
  char yz[31];     // 颜值，漂亮；一般；歪瓜裂枣
};

int main()
{
    struct st_girl girl; 
    memset(&girl, 0, sizeof(struct st_girl));

    char xml_str[200];

    // 赋值
    girl.age = 18;
    girl.height = 165;
    girl.weight = 48;
    strcpy(girl.name, "西施");
    strcpy(girl.sc, "火辣");
    strcpy(girl.yz, "漂亮");

    sprintf(xml_str, "<name>%s</name><age>%d</age><height>%d</height><weight>%.1lf</weight><sc>%s</sc><yz>%s</yz>"\
                , girl.name, girl.age, girl.height, girl.weight, girl.sc, girl.yz);
    
    printf("%s\n", xml_str);

    return 0;
}