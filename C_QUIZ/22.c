#include<stdio.h>

int main(){

    int x,y;
    for(x = 5; x >= 1; x--){
        for(y = 1; y <= x; y++){
            printf("\n%d",y);
        }
    }

    return 0;
}
/*
How many times the loop will be executed?
1.15
2.10
3.11
4.13
*/
