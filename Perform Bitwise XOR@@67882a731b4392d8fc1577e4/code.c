#include <stdio.h>
int main() {
    int a,b,c;
    scan("%d %d",&a,&b);
    c = a ^ b;
    print("%d",c);
    return 0;
}