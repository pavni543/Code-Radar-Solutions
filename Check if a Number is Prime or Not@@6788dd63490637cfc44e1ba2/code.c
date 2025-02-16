#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    int i=1;
    if(a>=1) {
        for(a;a%i==0;i++) {
            printf("Prime",a);
        }
    }
    else {
        printf("Not Prime");
    }
    return 0;
}