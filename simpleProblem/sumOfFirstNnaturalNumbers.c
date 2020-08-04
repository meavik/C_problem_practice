#include<stdio.h>

int main(void){

    int n,sum;
    printf("Enter the last value of the series: ");
    scanf("%d",&n);
    sum = n*(n+1)/2;
    printf("Sum is: %d\n",sum);
    return 0;
}
