#include <stdio.h>
int maiin() {
    int a;
    scanf("%d",a);
    if(a==0) {
        printf("Zero");
    }
    else if(a>0) {
        printf("Positive");
    }
    else {
        printf("Negative");
    }
    return 0;
}