#include <stdio.h>

void power_set(int set[], int n) {
    int power_set_size = 1 << n;
    for (int i = 0; i < power_set_size; i++) {
        printf("{");
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                printf("%d ", set[j]);
            }
        }
        printf("}\n");
    }
}

void main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int set[n];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &set[i]);
    }

    power_set(set, n);
}
