#include<stdio.h>

int main(){

    static int i;
    printf("\ni is %d",i);
    return 0;
}
/*
What will be the output?
1.0
2.garbage value
3.1
4.runtime error
*/
