#include <stdio.h>
int sum(int n){
    if(n==0) return 0;
return n+(sum(n-1));
}
int main(){
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    printf("%d",sum(n));

    return 0;
}