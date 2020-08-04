#include<stdio.h>

int sumOfNatural(int);

int main(void){

    int n,sum;
    printf("Enter the last value of the series: ");
    scanf("%d",&n);
    sum = sumOfNatural(n);
    printf("Sum is: %d\n",sum);
    return 0;
}

int sumOfNatural(int n){
  //sometimes we count 0 as a natural number as well
    if(n == 1){
        return 1;
    }
    return n + sumOfNatural(n-1);
}
