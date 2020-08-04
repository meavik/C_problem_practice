#include<stdio.h>
void main(){

    int a = b = c = 10;
    a = b = c = 50;
    printf("\n%d %d %d",a,b,c); 
}

/*What is the output?
1.50 50 50
2.Compile Time Error
3.10 10 10
4.Three garbage values
*/
