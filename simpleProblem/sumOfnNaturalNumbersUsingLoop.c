#include<stdio.h>

int main(void){

    int n,sum = 0;
    printf("Enter the last value of the series: ");
    scanf("%d",&n);
    for (size_t i = n; i > 0; i--)
    {
        sum += i;
    }
    
    printf("Sum is: %d\n",sum);
    return 0;
}
