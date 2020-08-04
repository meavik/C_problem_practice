#include<stdio.h>
int main(void){

    int x;
    for(x = -1; x<=10; x++){
        if(x<5)
            continue;
        else
            break;
        printf("abc");
        
    }

    return 0;
}
/*How many times "abc" will be printed?
1.infinite times
2.10 times
3.0 times
4.11 times*/
