//Question1

#include<stdio.h>
int count_set_bits(int num){
    int count=0;
    int temp;
    while(num!=0){
        temp=num&1;
        if(temp==1)count+=1;
        num=num>>1;
    }
    return count;
}

void main(){
    int num;
    printf("Enter number :");
    scanf("%d",&num);
    int res;
    res=count_set_bits(num);
    printf("\nNumber of set bits are :");
    printf("%d",res);
}


//Question2


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

//Question3


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

//Question4


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

//Question5


#include<stdio.h>
int bits_flipped(int num,int a,int b){
    num=a^b;
    int count=0;
    int temp;
    while(num!=0){
        temp=num&1;
        if(temp==1)count+=1;
        num=num>>1;
    }
    return count;
}

void main(){
    int a,b,num;
    printf("Enter the numbers :");
    scanf("%d %d",&a,&b);
    int res;
    res=bits_flipped(num,a,b);
    printf("Numebr of bits to be flipped:");
    printf("%d",res);
}

//Question6


#include<stdio.h>
int count_set_bits(int num){
    int count=0;
    int temp;
    while(num!=0){
        temp=num&1;
        if(temp==1)count+=1;
        num=num>>1;
    }
    return count;
}

void main(){
    int it;
    printf("Enter the number :");
    scanf("%d",&it);
    int totalbits=0;
    for(int i=0;i<=it;i++){
        totalbits+=count_set_bits(i);
    }
    printf("Total number of bits are:");
    printf("%d",totalbits);
}

//Question7


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

//Question9


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