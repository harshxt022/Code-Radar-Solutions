#include <stdio.h>

int main() {
    float a ; float b ; float c ;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    float d;
    d = (a+b+c)/3;
    printf("Average: %.2f",d);
    return 0;
}