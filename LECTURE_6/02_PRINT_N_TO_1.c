#include <stdio.h>
void p(int n){
    if(n==0) return;
    printf("%d\n",n);
    p(n-1);
    return;
}
int main()
{
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    p(n);
    return 0;
}