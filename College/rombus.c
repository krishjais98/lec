#include<stdio.h>
int main()
{
    int a=4;

    for(int i=1,c=0;i<=a;i++,c++){
    for(int j=1;j<=a+c;j++)
    {
        if(j<=c)      printf("   ");
        else      printf(" & "); 

}
printf("\n"); }

    return 0;
}