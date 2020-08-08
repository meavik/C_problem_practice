#include<stdio.h>

int main(){

    int c = 2, d = 5, e = 10,a;
    a = c>1?d>1||e>1?100:200 :300;
    printf("\na = %d",a);

    return 0;
}
/*
What is the output?
1.a = 300
2.a = 100
3.a = 200
4.none of these
*/
