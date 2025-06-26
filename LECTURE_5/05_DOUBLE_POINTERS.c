#include <stdio.h>
int main(){
    int n;
    n=6;
    int* a=&n;   //int* is a container that is able to store address of another contaner
    int** b=&a;
    printf("%d\n",**b);
    printf("%p\n",&n);   //yaha per n ka address 
    printf("%p\n",a);    //yaha per n ka address a me store hai
    printf("%p\n",b);    //yaha per a ka address store hai b me
    return 0;
}