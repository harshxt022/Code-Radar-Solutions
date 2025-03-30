#include <stdio.h>
int prime(int k){
    if(k<2){
        return 0;
    }
    for(int i=2;i*i<=k;i++){
        if(k%i==0){
            return 0;
        }
    }
    return 1;
    
}
int main()
{
    int n;int r = 0;
    printf("enter no. of elements ");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array");
    for(int q=0;q<n;q++){
        scanf("%d",&a[q]);
    }
    printf("prime no. are \n");
    for(int c=0;c<n;c++){
        if(prime(a[c])){
            printf("%d,",a[c]);
            r+=1;
        }
    }
    if(!r){
        printf("not found");
    }
    return 0;
}