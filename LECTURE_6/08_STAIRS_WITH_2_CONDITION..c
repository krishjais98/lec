#include <stdio.h>
int stairs(int n){
    int ways;
    if(n==1){return 1;}
    if(n==2){return 2;}
     ways=stairs(n-1)+stairs(n-2);
    return ways;
}
int main(){
    int n;
    printf("ENTER THE VALUE FOR STAIRS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    printf("%d",stairs(n));
    return 0;
}