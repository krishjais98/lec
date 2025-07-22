#include <stdio.h>
void pip(int n){
    if(n==0) {return;}
    printf("Pre  %d\n",n);
    pip(n-1);
    printf("In   %d\n",n);
    pip(n-1);
    printf("Post %d\n",n);
    return ;
}
int main(){
    int n;
    printf("ENTER THE NUMBER:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    pip(n);
    return 0;
}