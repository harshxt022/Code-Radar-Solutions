// Your code here...
#include <stdio.h>
#include <math.h>
int main(){
    int a;
    int flag = 1;
    scanf("%d",&a);
    if(a==0){
        printf("Not Prime");
    }else{
        for(int i = 2;  i * i <= a;i++){
            if(a%i==0){
            flag = 0;
            break;
        }if(flag){
            printf("Prime");
        }else{
            printf("Not Prime");
        }
    }   
    return 0;
}