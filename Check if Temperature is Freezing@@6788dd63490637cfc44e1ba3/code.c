#include <stdio.h>

int main(void) {
    int a;
    scanf("%d",&a);
    if(a<=0){
        printf("Freezing");
    }
    else{
        printf("Above Freezing");
    }
}