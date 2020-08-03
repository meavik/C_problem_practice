#include<stdio.h>

int main(void){

    int i,n;
    printf("Enter the number to generate multiplication table: ");
    scanf("%d",&n);
    printf("Multiplication table of %d is:\n",n);
    for(i = 1; i< 11; i++){
        printf("%d X %d = %d\n",i,n,i*n);
    }

    return 0;
}
