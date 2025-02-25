#include <stdio.h>
int main(void) 
{
    int a;
    int ascii=65;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        for (int j=ascii;j<=i;j++)
        {
            printf("%c",ascii);
        }
        printf("\n");
    }
    return 0;
}