#include <stdio.h>
int fact(int n){
    if(n==0)return 1;
    return n*(fact(n-1));
}
int main()
{
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    printf("%d",fact(n));
    return 0;
}