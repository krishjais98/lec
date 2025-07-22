#include <stdio.h>
int power(int a,int b){
    if(b==0) return 1;
    return a*(power(a,b-1));
}
int main(){
    int a,b;
    printf("ENTER BASE:");
    scanf("%d",&a);
    printf("INPUT BY USER:%d\n",a);
    printf("ENTER POWER:");
    scanf("%d",&b);
    printf("INPUT BY USER:%d\n",b);
    printf("%d",power(a,b));
    return 0;
}