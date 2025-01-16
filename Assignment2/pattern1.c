// Program to print the Butterfly Pattern
#include <stdio.h>
void print_butterfly(int size) {
    for (int row = 1; row <= size; row++) {
        for (int star = 1; star <= row; star++) {
            printf("* ");
        }
        for (int space = 1; space <= 2 * (size - row); space++) {
            printf("  ");
        }
        for (int star = 1; star <= row; star++) {
            printf("* ");
        }
        printf("\n");
    }

    for (int row = size; row >= 1; row--) {
        for (int star = 1; star <= row; star++) {
            printf("* ");
        }
        for (int space = 1; space <= 2 * (size - row); space++) {
            printf("  ");
        }
        for (int star = 1; star <= row; star++) {
            printf("* ");
        }
        printf("\n");
    }
}

int main() {
    int num_rows;
    printf("Enter the number of rows for the butterfly pattern: ");
    scanf("%d", &num_rows);

    print_butterfly(num_rows);
    return 0;
}
