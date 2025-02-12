#include <stdio.h>
int main() {
    int a;
    scanf("%d",&a);
    switch(a){
        case (90<=a<=100):
        printf("A");
        break;
        case (89<=a<=80):
        printf("B");
        break;
        case (79<=a<=70):
        printf("C");
        break;
        case (69<=a<=60):
        printf("D");
        break;
        default:
        printf("F");
        break;
    }
    return 0;
}