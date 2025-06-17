#include<stdio.h>
int odd_even_check(int a){
    if((a&1)==0){
        printf("%d is even ",a);
    }
    else{
        printf("%d is odd",a);
    }
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    odd_even_check(num);
    return 0;
}