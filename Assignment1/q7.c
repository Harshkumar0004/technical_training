#include <stdio.h>

int bit_square(int num) {
    int result = 0;
    int temp = num;
    
    while (temp > 0) {
        if (temp & 1) {
            result += num;
        }
        num <<= 1;
        temp >>= 1;
    }
    
    return result;
}

void main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int res = bit_square(num);
    printf("Square of %d is: %d\n", num, res);
}
