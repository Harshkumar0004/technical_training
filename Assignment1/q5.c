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
