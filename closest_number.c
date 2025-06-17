#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int closestNumber(int n, int m){
    int lower = (n/m)*m;
    int upper = (n*m)>0?(((n/m)+1)*m) : (((n/m)-1)*m);
    int upperdiff = abs(n - upper);
    int lowerdiff = abs(n - lower);
    if (upperdiff<lowerdiff)
        return upper;
    return lower;
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