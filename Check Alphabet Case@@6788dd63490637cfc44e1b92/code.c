#include <stdio.h>
int main() {
    char a[100];
    scanf("%s",&a);
    if((a<=A) && (a>=Z)) {
        printf("Uppercase");
    }
    else if((a<=a) && (a>=z)) {
        printf("Lowercase");
    }
    else 
    printf("Not an alphabet");
    return 0;
}