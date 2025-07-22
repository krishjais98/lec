#include <stdio.h>
void p(int n){
    if(n==0) return;
    p(n-1);
    printf("%d\n",n);
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