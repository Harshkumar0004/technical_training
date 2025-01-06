#include<stdio.h>

int setbit_position(int num) {
    if (num == 0) {
        return -1;
    }

    int count = 1;
    while ((num & 1) == 0) {
        num = num >> 1;
        count++;
    }
    return count;
}

void main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    int res = setbit_position(num);
    if (res == -1) {
        printf("The number has no set bits.\n");
    } else {
        printf("Position of the least significant set bit is: %d\n", res);
    }
}
