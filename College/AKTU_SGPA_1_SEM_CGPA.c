#include <stdio.h>
int main()
{
    int a=5;
    for(int i=1,t=0,d=a-1;i<=a;i++,t++,d--){
    for(int c=1;c<=a+t;c++){
    if(c>d)printf(" * ");
    else printf("   ");
}
printf("\n"); }
    return 0;
}