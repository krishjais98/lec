#include <stdio.h>
void swap(int* a,int* b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int a,b;
    printf("ENTER a:");
    scanf("%d",&a);
    printf("INPUT NY USER:%d\n",a);
    printf("ENTER b:");
    scanf("%d",&b);
    printf("INPUT NY USER:%d\n",b);
    swap(&a,&b);
    printf("a=%d\nb=%d\n",a,b);
    return 0;
}