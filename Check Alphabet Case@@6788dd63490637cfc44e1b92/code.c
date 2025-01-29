#include <stdio.h>
int main() {
    char i;
    scanf("%c",&i);
    if(i>=A && i<=Z){
        printf("Uppercase");
    }else if(i>=a && i<=z){
        printf("Lowercase");
    }
    return 0;
}