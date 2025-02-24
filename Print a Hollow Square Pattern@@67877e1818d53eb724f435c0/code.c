#include <stdio.h>

int main() {
    int a;
    
    scanf("%d",&a);
    
    for(int i=1 ; i<=a ; i++){
            for(int s = 1;s<=a;s++){
                if(i==1 || s==1 || i==a || s==a){
                    printf("*");
                }else{
                    printf(" ");
                }
            }
            printf("\n");
    }
    return 0;
}