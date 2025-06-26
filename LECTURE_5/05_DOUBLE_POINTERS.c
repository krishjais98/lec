#include <stdio.h>
int main(){
    int n;
    n=6;
    int* a=&n;   //int* is a container that is able to store address of another contaner
    int** b=&a;
    printf("%d\n",**b);
    printf("%p\n",&n);
    printf("%p\n",a);
    printf("%p\n",b);
    return 0;
}