#include <stdio.h>
int pow(int a,int b){
    if(b==0){return 1;}
    if(b==1){return a;}
      int same=pow(a,b/2);
    if(b%2==0)
      return same*same;
      else{
        return a*same*same;
      }
    }
int main(){
    int a,b;
    printf("ENTER BASE:");
    scanf("%d",&a);
    printf("INPUT BY USER:%d\n",a);
    printf("ENTER POWER:");
    scanf("%d",&b);
    printf("INPUT BY USER:%d\n",b);
    printf("%d",pow(a,b));
    return 0;
}