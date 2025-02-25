#include <stdio.h>
int main(void) 
{
    int a;
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        int hi = 1;
        for (int j=1;j<=i;j++)
        {
            printf("%d ",hi);
            hi += 1;
        }
        printf("\n");
    }
    return 0;
}