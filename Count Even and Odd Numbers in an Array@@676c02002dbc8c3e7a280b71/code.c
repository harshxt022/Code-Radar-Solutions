#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int odd = 0; int even = 0;
    for(int q = 0 ; q<n;q++){
        scanf("%d",&a[q]);
    }
    for(int i =0;i<n;i++){
        if(a[i]%2==0){
            even+=1;
        }else{
            odd+=1;
        }
    }
    printf("%d %d",even,odd);
    return 0;
}