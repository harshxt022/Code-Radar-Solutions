#include <stdio.h>
int main(void) 
{
    int a;
    scanf("%d",&a);
    int hi = 1;
    for (int i=1;i<=a;i++)
    {
        
        for (int j=1;j<=i;j++)
        {
            printf("%d ",hi);
            hi += 1;
        }
        printf("\n");
    }
    return 0;
}