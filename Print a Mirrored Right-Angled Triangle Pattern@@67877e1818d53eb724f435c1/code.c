#include <stdio.h>

int main() {
    int a;
    
    scanf("%d",&a);
    
    for(int i=1 ; i<=a ; i++){
            for(int s = 0;s<=a-i;s++){
                printf(" ");
            }
            for(int j =0 ; j<=i-1;j++){
                printf("*");
            }
        printf("\n");

    }
    return 0;
}