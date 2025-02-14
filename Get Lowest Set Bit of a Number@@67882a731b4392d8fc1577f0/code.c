#include <stdio.h>

int main() {
    int num, position = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num == 0) {
        printf("No set bit found.\n");
        return 0;
    }
    while ((num & 1) == 0) { 
        num >>= 1;
        position++;
    }
    printf("%d", position);

    return 0;
}
