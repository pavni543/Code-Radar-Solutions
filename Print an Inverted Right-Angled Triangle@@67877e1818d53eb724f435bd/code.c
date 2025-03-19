#include <stdio.h>

int main() {
    int i, j, n;
    
    // Input the number of rows for the inverted triangle
    scanf("%d", &n);

    // Outer loop for rows
    for(i = 1; i <= n; i++) {
        // Inner loop for spaces
        for(j = 1; j < i; j++) {
            printf(" ");  // Print spaces before stars
        }

        // Inner loop for stars
        for(j = i; j <= n; j++) {
            printf("*");  // Print stars
        }
        
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
