#include <stdio.h>
int main(void) {
    int a,b;
    scanf("%d %d",&a,&b);
    if((a>0 && b>0)||(a<0 && b<0)){
        printf("Same Sign");
    }
    else{
        printf("Different Sign");
    }
}