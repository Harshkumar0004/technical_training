// Program to print the Pascal Triangle 
#include <stdio.h>
void drawPascalTriangle(int levels) {
    for (int row = 0; row < levels; row++) {
        for (int space = 0; space < levels - row - 1; space++) {
            printf(" ");
        }

        int value = 1;
        for (int col = 0; col <= row; col++) {
            printf("%d ", value);
            value = value * (row - col) / (col + 1);
        }
        printf("\n");
    }
}

int main() {
    int numLevels;
    printf("Enter the number of rows for Pascal's Triangle: ");
    scanf("%d", &numLevels);
    drawPascalTriangle(numLevels);
    return 0;
}
