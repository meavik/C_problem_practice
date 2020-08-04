#include<stdio.h>
int main(){

    int a[5]={5,1,15,20,25};
    int i,j,m;
    i = ++a[1];
    j = a[1]++;
    m = a[i++];
    
    printf("%d %d %d\n",i,j,m);

    return 0;
}

/*What is the output?
1.2 1 15
2.1 2 5
3.3 2 15
4.2 3 20
*/
