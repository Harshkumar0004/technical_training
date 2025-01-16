// Program to print the Hollow Hourglass Pattern
#include <stdio.h>
void drawHollowHourglassPattern(int size) {
    for (int row = 0; row < 2 * size - 1; row++) {
        int limit = (row < size) ? row : 2 * size - 2 - row;

        for (int space = 0; space < limit; space++) {
            printf("  ");
        }

        for (int col = 0; col < 2 * (size - limit) - 1; col++) {
            if (col == 0 || col == 2 * (size - limit) - 2 || row == 0 || row == 2 * size - 2)
                printf("%c ", col + 'A');
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main() {
    int numRows;
    printf("Enter the number of rows: ");
    scanf("%d", &numRows);
    drawHollowHourglassPattern(numRows);
    return 0;
}
