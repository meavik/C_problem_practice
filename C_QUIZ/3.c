#include<stdio.h>
int main(){

    int a= 500, b = 100, c;
    if(!a>=400)
        b = 300;
    c = 200;

    printf("b = %d c = %d\n",b,c);

    return 0;
}
/*What is the output
1.b = 300 c = 200
2.b = 100 c = garbage
3.b = 300 c = garbage
4.b = 100 c = 200
*/
