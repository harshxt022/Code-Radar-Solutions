#include <stdio.h>

int main() {
    int a;
    printf("enter no.");
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
    return 0;
}