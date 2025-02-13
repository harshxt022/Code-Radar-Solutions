// Your code here...
#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a>0 && a<=100){
        printf("In Range");
    }else if(a%5==0){
        printf("Divisible by 5");
    }else{
        printf("Out of Range");
    }
    return 0;
}