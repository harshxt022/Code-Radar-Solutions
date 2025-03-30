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
    
    scanf("%d",&n);
    int a[n];
    
    for(int q=0;q<n;q++){
        scanf("%d",&a[q]);
    }
    
    for(int c=0;c<n;c++){
        if(prime(a[c])){
            printf("%d ",a[c]);
            r+=1;
        }
    }
    if(!r){
        printf("0");
    }
    return 0;
}