#include <stdio.h>

int main()
{
    char password[20] = {0};

    printf("请输入密码：");
    scanf("%s", password);

    while (getchar() != '\n'); // 清理缓冲区

    printf("请确认密码(Y/N)：");

    int ret = getchar();

    if (ret == 'Y' || ret == 'y')
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}