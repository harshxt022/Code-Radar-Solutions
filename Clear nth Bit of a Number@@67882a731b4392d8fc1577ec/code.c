#include <stdio.h>

int clearNthBit(int num, int n) {
    return num & ~(1 << n);
}

int main() {
    int num, n;
    
    scanf("%d %d", &num, &n);
    int result = clearNthBit(num, n);
    printf("%d",result);
    
    return 0;
}
