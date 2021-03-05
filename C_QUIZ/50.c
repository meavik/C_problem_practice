#include <stdio.h>

int main()
{
    int x=5,y=0,a,b;
    a = ++y || ++x;
    b = --y && ++x;
    printf("%d %d %d %d\n",x,y,a,b);
}
