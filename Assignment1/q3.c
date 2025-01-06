#include <stdio.h>

int power_of_two(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

void main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (power_of_two(num)) {
        printf("%d is a power of two.\n", num);
    } else {
        printf("%d is not a power of two.\n", num);
    }

}
