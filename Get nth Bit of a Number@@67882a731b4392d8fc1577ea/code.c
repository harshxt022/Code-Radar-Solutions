#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if(a & (1<<b)){printf("Set");}
    else{printf("Not Set");}
    return 0;
}