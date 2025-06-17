#include<stdio.h>
#include<math.h>
int closestNumber(int n, int m){
    int lower= round(n/m)*m;
    int upper = round((n%m==0?n:(n/m+1)*m));
    int upperdiff = abs(upper - n);
    int lowerdiff = abs(n - lower);
    if (upperdiff<lowerdiff){
        return upper;
    }
    else if(lowerdiff<upperdiff){
        return lower;
    }
    else{
        return (abs(lower)>abs(upper)?lower:upper);
    }
}
int main(){
    int m,n;
    printf("Enter m: ");
    scanf("%d",&m);
    printf("Enter n: ");
    scanf("%d",&n);
    printf("The number closest to %d and divisible by %d is : %d",n,m,closestNumber(n,m));
    return 0;
}