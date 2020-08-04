#include<stdio.h>

int main(void){

    unsigned int i = 4294967295;//max size of 4 byte int
    while(i++ != 0)
        printf("%d\n",++i);
    printf("\n");

    return 0;
}
/*What is the output?
1.infinite loop
2.0 1 2 3 ... ... 4294967295
3.0 1 2 3 ... ... -2147483648 ... 2147483647
4.No output
*/
