#include <stdio.h>

int main() {
    int a;
    printf("enter no.");
    scanf("%d",&a);
    
    for(int i=1 ; i<=a ; i++){
            for(int s = 1;s<=a;s++){
                printf("*");
            }
            
    }
    return 0;
}