#include <stdio.h>

int main() {
    int i, j, n;
    
    // Input the number of rows for the inverted triangle
    scanf("%d", &n);

    // Outer loop for rows (from n down to 1)
    for(i = n; i >= 1; i--) {
        // Inner loop for spaces (increasing as rows decrease)
        for(j = 0; j < n - i; j++) {
            printf(" ");  // Print spaces
        }

        // Inner loop for stars (decreasing as rows decrease)
        for(j = 0; j < i; j++) {
            printf("*");  // Print stars
        }

        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
