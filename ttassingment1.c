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