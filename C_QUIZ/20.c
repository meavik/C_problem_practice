#include<stdio.h>

union test
{
    int x;
    char y;
    float z;
};


int main(){

    union test t;
    printf("%d",sizeof(t));

    return 0;
}
/*
What is the size of the union?
1.7 bytes
2.1 bytes
3.4 bytes
4.8 bytes
*/
