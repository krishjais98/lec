#include <stdio.h>
int power(int a,int b){
    if(b==0){return 1;}
     if(b==1){return a;}
      int same=power(a,b/2);
    if(b%2==0)
      return same*same;}
      else{
        b=b-1;  //THIS LINE NOT MUCH IMPO 
        return 2*same*same;
      
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