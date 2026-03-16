#include<stdio.h>
int main()
{ 
    int a=0,c=1,n,s=1;
    printf("Enter the number of Terms of Fibonacci Sequence:");
    scanf("%d",&n);
for(int i=1;i<=n;i++){
    printf(" %d ",c);
    c=a+s;
    a=s;
    s=c;
} 
  
    return 0;
}
