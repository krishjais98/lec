#include <stdio.h>
int swap(int a,int b){
    a=a+b;    //TOTAL
    b=a-b;   //SWAP VALUE OF b
    a=a-b;    ////SWAP VALUE OF a
    printf("VALUE OF 'a':%d AND OF 'b':%d",a,b);
    return 0;}
int main(){
    int a,b;
    printf("ENTER a=");
    scanf("%d",&a);
    printf("INPUT BY USER:%d\n",a);
    printf("ENTER b=");  
    scanf("%d",&b);
    printf("INPUT BY USER:%d\n",b);
    swap(a,b);
    return 0;
}