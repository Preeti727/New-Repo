#include<stdio.h>
int swapNum(int a,int b){
    a = a+b;
    b = a-b;
    a = a-b;
    printf("After swapping:\na=%d b=%d",a,b);
    return 0;
}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("Before swapping:\na=%d b=%d\n",a,b);
    swapNum(a,b);
    return 0;
}