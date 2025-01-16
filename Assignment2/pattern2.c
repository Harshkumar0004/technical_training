// Program to print the alphabet pattern
#include <stdio.h>
void printAlphabetPattern(int size) {
    for (int row = 1; row <= size; row++) {
        for (int letter = 0; letter < row; letter++) {
            printf("%c", 'A' + letter);
        }

        for (int space = 0; space < 2 * (size - row); space++) {
            printf(" ");
        }

        for (int letter = row - 1; letter >= 0; letter--) {
            printf("%c", 'A' + letter);
        }

        printf("\n");
    }
}

int main() {
    int numRows;
    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &numRows);
    printAlphabetPattern(numRows);

    return 0;
}
