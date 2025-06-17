#include<stdio.h>
int multiTable(int i,int x){
    if(x==11){
        return 0;
    }
    else{
        printf("%d X %d = %d\n",i,x,i*x);
        return multiTable(i,x+1);
    }
}
int main(){
    int i;
    int x=1;
    printf("Enter a number: ");
    scanf("%d",&i);
    multiTable(i,x);
    return 0;
}
