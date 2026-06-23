//while循环中的
//break是用于永久的终止循环的，
//continue是用于跳过本次循环中剩余的语句，直接进入下一次循环的。

#include <stdio.h>

/*/int main()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d ", i);
        i++;
    }
    return 0;
}*/

 //int main()
// { 
    //int ch = 0;
    //while(getchar())
/*int ch = gethchar();
    printf("%c\n", ch);//1
    putchar(ch);//2 */

   /* int ch  = 0;
    while ((ch = getchar()) != EOF)
    {
        putchar(ch);
    }
    return 0;
 }
int main()
{
    int i = 1;//初始化
    while(i<=10)//条件判断
    {
        printf("%d ", i);
        i++;//调整
    }
    return 0;
}*/

int main()
{
    int i = 0;
    for(i=1;i<=10;i++)
    {
        printf("%d ", i);
    }
    return 0;
}