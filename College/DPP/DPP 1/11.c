#include<stdio.h>
int main()
{int a,b,c;
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    c=a+b;
    printf("Total:%d\n",c);

    a=c-a;
    printf("a:%d\n",a);
    printf("b:%d\n",c-a);


    return 0;
}