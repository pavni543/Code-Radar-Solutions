#include <stdio.h>
int main() {
    int b;
    scanf("%d",&b);
    if((b%3==0)) {
        printf("Divisible by 3");
    }
    else if(b%5==0) {
        printf("Divisible by 5");
    }
    else if((b%3!=0) || (b%5!=0)) {
        printf("Not Divisible");
    }
    else {
        printf("Divisible by Both");
    }
    return 0;
}