#include <stdio.h>
int main() {
    int i,j,n;
    scanf("%d",&n);
    for(n=i;i>=n,i++) {
        for(j=1;j<=i;j--) {
            printf("* ",j);
        }
        printf("\n");
    }
    return 0;
}