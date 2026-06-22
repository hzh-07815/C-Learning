#include <stdio.h>

int main()
{
    // =========================
    // 1. if 基础判断
    // =========================
    int age = 20;

    if (age > 18)
    {
        printf("成年\n");
    }
    else if (age < 18)
    {
        printf("未成年\n");
    }
    else
    {
        printf("刚好18岁\n");
    }

    // =========================
    // 2. 多分支年龄判断
    // =========================
    int age2 = 25;

    if (age2 >= 0 && age2 < 18)
    {
        printf("青少年\n");
    }
    else if (age2 >= 18 && age2 < 30)
    {
        printf("青年\n");
    }
    else if (age2 >= 30 && age2 < 40)
    {
        printf("中年\n");
    }
    else if (age2 >= 40 && age2 < 60)
    {
        printf("壮年\n");
    }
    else if (age2 >= 60 && age2 < 100)
    {
        printf("老年\n");
    }
    else
    {
        printf("异常年龄\n");
    }

    // =========================
    // 3. 判断奇偶数
    // =========================
    int num = 10;

    if (num % 2 == 1)
    {
        printf("奇数\n");
    }
    else
    {
        printf("偶数\n");
    }

    // =========================
    // 4. for循环：1~100奇数
    // =========================
    printf("1-100奇数：\n");
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d ", i);
        }
    }

    printf("\n");

    // =========================
    // 5. switch语句（星期判断）
    // =========================
    int day = 3;

    switch (day)
    {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("输入错误\n");
            break;
    }

    return 0;
}