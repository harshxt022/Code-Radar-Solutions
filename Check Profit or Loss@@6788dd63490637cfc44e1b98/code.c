#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d");
    c = b - a ;
    if(c>0){
        printf("Profit");
    }else if(c<0){
        printf("Loss");
    }else{
        printf("No Profit No Loss");
    }
    return 0;
}