#include<stdio.h>
#include<string.h>

void main(){

    char a[] = "Hello World";
    char *p;
    p = a;
    printf("\n%d %d %d %d\n",sizeof(a),sizeof(p),strlen(a),strlen(p));
}

/*
1.11 11 10 10
2.10 10 10 10 
3.12 12 11 11
4.12 4 11 11
*/
