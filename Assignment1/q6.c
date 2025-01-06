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
