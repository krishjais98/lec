#include <stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    printf("%d",fib-o(n));
    return 0;
}
// METHOD 2
/*
#include <stdio.h>
void fibo(int a,int s,int f){
    if(f==0) return;
    printf(" %d ",a);
    f=f-1;
    fibo(s,a+s,f);
    return;
}
int main(){
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    fibo(1,1,n);
    return 0;
}
    */