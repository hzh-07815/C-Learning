#include <stdio.h>

struct Stu
{
    char name[20];
    int age;
    char sex[10];
    char tele[12];
};


void print(struct Stu* ps)
{
    printf("%s %d %s %s\n", (*ps).name, (*ps).age, (*ps).sex, (*ps).tele);//%s表示输出字符串
}

int main()
{
    struct Stu s = {"张三", 18, "nan","13570584834"};
    print(&s);
    // struct Stu s1 = {"张三", 18, "nan","13570584834"};
   // printf("name = %s\n", s1.name);//%s表示输出字符串
    //printf("age = %d\n", s1.age);//%d表示输出整数
    //printf("score = %.1f\n", s1.score);//.1f表示保留一位小数

    return 0;
}
// GitHub 测试1