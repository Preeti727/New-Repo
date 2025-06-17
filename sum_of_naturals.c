#include<stdio.h>
int sumOfNaturals(int x){
    int sum;
    sum = (x*(x+1))/2;
    return sum;
}
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("%d",sumOfNaturals(num));
    return 0;
}
