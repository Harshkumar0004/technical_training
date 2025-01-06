#include <stdio.h>

void findTwoNonRepeating(int arr[], int n, int results[]) {
    int xor_result = 0, set_bit_no, i;
    int x = 0, y = 0;

    for (i = 0; i < n; i++) {
        xor_result ^= arr[i];
    }

    set_bit_no = xor_result & -xor_result;

    for (i = 0; i < n; i++) {
        if (arr[i] & set_bit_no) {
            x ^= arr[i];
        } else {
            y ^= arr[i];
        }
    }

    results[0] = x;
    results[1] = y;
}

void main() {
    int arr[] = {4, 5, 4, 6, 7, 5, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int results[2];

    findTwoNonRepeating(arr, n, results);

    printf("The two non-repeating elements are: %d and %d\n", results[0], results[1]);

}
