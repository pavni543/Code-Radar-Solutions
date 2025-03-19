#include <stdio.h>

int main() {
    int i, j, n;
    
    // Input the number of rows for the inverted triangle
    scanf("%d", &n);

    // Outer loop for rows (from n down to 1)
    for(i = n; i >= 1; i--) {
        // Inner loop for stars
        for(j = 1; j <= i; j++) {
            printf("* ");  // Print stars
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
