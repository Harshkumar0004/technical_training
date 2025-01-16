// Program to print X Pattern
#include <stdio.h>
void main() {
    int i, j, size;

    printf("Enter Size: ");
    scanf("%d", &size);

    for(i = 1; i <= size; i++) {
        for(j = 1; j <= size - i; j++) {
            printf(" ");
        }
        for(j = i; j <= size; j++) {
            printf("*");
        }
        printf("\n");
    }

    for(i = 1; i <= size; i++) {
        for(j = 1; j <= i; j++) {
            printf(" ");
        }
        for(j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
}