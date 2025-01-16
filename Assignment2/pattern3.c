// Program to print the Hourglass Alphabet Pattern
#include <stdio.h>
void printHourglassAlphabetPattern(int size) {
    for (int row = 0; row < 2 * size - 1; row++) {
        int limit = (row < size) ? row : 2 * size - 2 - row;

        for (int space = 0; space < limit; space++) {
            printf("  ");
        }

        for (int letter = 0; letter < 2 * (size - limit) - 1; letter++) {
            printf("%c ", letter + 'A');
        }

        printf("\n");
    }
}

int main() {
    int numSize;
    printf("Enter the size of the hourglass pattern: ");
    scanf("%d", &numSize);
    printHourglassAlphabetPattern(numSize);

    return 0;
}
