#include <stdio.h>
#include <ctype.h>
int main() {
    char a;
    scanf("%c",&a);
    if(a>='0' && a<='9'){
        printf("Digit");
    }
    else if(isalpha(a)){
        char b = tolower(a);
        if(b=='a'||b=='e'||b=='i'||b=='o'||b=='u'){
        printf("Vowel");
    }else{
        printf("Consonant");
    }
    }else{
        printf("Special Character");
    }
    return 0;
}