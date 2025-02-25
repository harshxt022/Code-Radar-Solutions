#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    for(int i=1 ; i<=a ; i++){
            for(int s = 1;s<=a-i;s++){
                printf(" ");
            }
            for(int j =1 ; j<=(2*i)-1;j++){
                printf("*");
            }
        printf("\n");
    }
    for(int k=a-1;k<=1;k++){
        for(int b = 1;b<=a-k;b++){
                printf(" ");
            }
            for(int x =1 ; x<=(2*k)-1;x++){
                printf("*");
            }
            printf("\n");
    }
        
    
    return 0;
}