#include <stdio.h>
float a;
int main() {
    
    scanf("%f",&a);
    if(a == 0){
        printf("You entered: 0");
    }
    else{
        printf("You entered: %.4f",a);
    }
    return 0;
}