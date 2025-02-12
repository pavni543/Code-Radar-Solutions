#include <stdio.h>
int main() {
    char num;
    scanf("%c",&ab);
    if((ab=='a') || (ab=='e') || (ab=='i') || (ab=='o') || (ab=='u') || (ab=='A') || (ab=='E') || (ab=='I') || (ab='O') || (ab=='U')) {
        printf("Vowel");
    }
    else {
        printf("Special Character");
    }
    return 0;
}