#include<stdio.h>
int sumOfSquares(int n){
    int Sum;
    Sum = ((n*(n+1)/2)*(2*n+1)/3);
    return Sum;
}
int main(){
    int num;
    printf("Enter a no.: ");
    scanf("%d",&num);
    printf("%d",sumOfSquares(num));
    return 0;
}