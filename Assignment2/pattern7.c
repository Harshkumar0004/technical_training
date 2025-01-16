// Function to draw diagonally connected patterns
#include <stdio.h>
void drawConnectedDiagonalStarPatterns(int levels, int times) {
    int totalLevels = levels * times; 
    for (int row = 1; row <= totalLevels; row++) {
        int currentPattern = (row - 1) / levels + 1; 
        int rowInPattern = (row - 1) % levels + 1;   

        for (int col = 1; col <= row; col++) {
            if (col == (currentPattern - 1) * levels + rowInPattern) {
                for (int star = 1; star <= rowInPattern; star++) {
                    printf("* ");
                }
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }
}

int main() {
    int size, n;
    printf("Enter the size of the diagonal star pattern: ");
    scanf("%d", &size);
    printf("Enter the number of times to repeat the pattern: ");
    scanf("%d", &n);

    drawConnectedDiagonalStarPatterns(size, n);

    return 0;
}
