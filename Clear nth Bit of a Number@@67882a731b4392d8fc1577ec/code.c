#include <stdio.h>

int clearNthBit(int num, int n) {
    return num & ~(1 << n);
}

int main() {
    int num, n;
    printf("Enter the number and the bit position to clear: ");
    scanf("%d %d", &num, &n);
    int result = clearNthBit(num, n);
    printf("Result after clearing %dth bit: %d\n", n, result);
    
    return 0;
}
