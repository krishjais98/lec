#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter 1 NUMBER");
    scanf("%d",&a);
     printf("Enter 2 NUMBER");
    scanf("%d",&b);
     printf("Enter 3 NUMBER");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("Greatest Number is:%d\n",a);
    }
    else;
        if(b>a && b>c){
        printf("Greatest Number is:%d\n",b);
    }
    else;
        if(c>a && c>b){
        printf("Greatest Number is:%d\n",c);
    }
    else;
    
    return 0;
}