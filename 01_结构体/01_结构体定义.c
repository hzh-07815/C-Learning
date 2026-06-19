#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    float score;
};

int main()
{
    struct Student s1 = {"张三", 18, 95.5f};

    printf("name = %s\n", s1.name);
    printf("age = %d\n", s1.age);
    printf("score = %.1f\n", s1.score);

    return 0;
}
// GitHub 测试