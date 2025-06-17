#include<stdio.h>
int odd_even_check(int a){
    if (a%2==0){
        printf("%d is an even number",a);
    }
    else{
        printf("%d is an odd number",a);
    }
    return 0;
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    odd_even_check(num);
    return 0;
}