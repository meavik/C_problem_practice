#include<stdio.h>

int main(){

    static int i=0;
    int j;
    for(j = 0; j<10;j++);
    {
        i += 2;
        i -= j;
    }
    printf("\n%d",i);
    return 0;
}
/*
What will be the output?
1.-27
2.-25
3.Can not be determined
4.-21
*/
