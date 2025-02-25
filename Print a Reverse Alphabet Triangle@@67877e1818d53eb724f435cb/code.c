#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    for(int i=1 ; i<=a ; i++){
        int ascii = 65;
        for(int j=1;j<=a+1-i;j++){
            printf("%c ",ascii);
            ascii +=1;
        }
        printf("\n");
    }
    return 0;
}