// Program to print the Hollow Square of Digits
#include <stdio.h>
void drawHollowSquareWithDigits(int n) {
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            
            if (row == 0 || row == n - 1) {
                printf("%d ", col + 1);
            }
            
            else if (col == 0) {
                printf("1 ");
            } else if (col == n - 1) {
                printf("%d ", n);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main() {
    int size;
    printf("Enter the size of the hollow square: ");
    scanf("%d", &size);
    drawHollowSquareWithDigits(size);
    
    return 0;
}
