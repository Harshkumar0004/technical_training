// Program to print Number Pattern
#include <stdio.h>
void printPattern(int n) {
    for (int row = 0; row < 2 * n - 1; row++) {
        for (int col = 0; col < 2 * n - 1; col++) {
            int top = row;
            int bottom = col;
            int right = (2 * n - 2) - col;
            int left = (2 * n - 2) - row;
            
            int minDistance = top;
            if (bottom < minDistance) {
                minDistance = bottom;
            }
            if (right < minDistance) {
                minDistance = right;
            }
            if (left < minDistance) {
                minDistance = left;
            }

            printf("%d ", (n - minDistance));
        }
        printf("\n");
    }
}

int main() {
    int N = 5;
    printPattern(N);
    return 0;
}
