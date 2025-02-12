#include <stdio.h>
int main() {
    char az;
    scanf("%c",&a);
    if((az>=A) && (az<=Z)) {
        printf("Uppercase");
    }
    else if((az>=a) && (az<=z)) {
        printf("Lowercase");
    }
    else {
        printf("Not an alphabet");
    }
    return 0;
}