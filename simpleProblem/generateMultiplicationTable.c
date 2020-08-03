#include<stdio.h>
int main(void){

    int i,n;
    printf("Enter the number to generate multiplication table: ");
    scanf("%d",&n);
    for(i = 1; i< 11; i++){
        printf("%d * %d = %d\n",i,n,i*n);
    }

    return 0;
}
