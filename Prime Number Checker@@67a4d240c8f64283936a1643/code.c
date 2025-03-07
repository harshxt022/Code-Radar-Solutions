#include <stdio.h>
int isPrime(int num){
    if(num == 2){
        return 1;
    }else if(num == 1){
        return 0;
    }
    for(int i = 2;i<num;i++){
        if(num%i==0){
            return 0;
            break;
        }else if(i=num-1){
            return 1;
        }
    }
    return 0;
}
// int main(){
//     int t,num;
//     scanf("d",&num);
//     while(t--){
//         int num;
//         scanf("%d",&num);
//         printf("%d",isPrime(num));
//     }
//     return 0;
// }