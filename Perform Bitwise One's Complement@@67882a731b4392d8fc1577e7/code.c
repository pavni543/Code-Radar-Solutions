#include <stdio.h>
int main() {
    int a;
    scanf("%d %d",&a);
    if(a==0) {
        printf("0");
    }
    else if(a<0 && a>0) {
        (printf("-%d",a+1));
    }
    else {
        printf("hu");
    }
    return 0;
}