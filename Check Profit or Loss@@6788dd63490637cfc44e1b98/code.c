#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d");
    c = b - a ;
    if(c>0){
        printf("Profit");
    }else if(a == 0){
        printf("No Profit No Loss");
    }else{
        printf("Loss")
    }
    return 0;
}