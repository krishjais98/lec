//METHOD:-1 (ADMIN)
/*#include <stdio.h>
void input(int in){
     printf("INPUT BY USER:%d\n",in);
     return ;}
int min(int a,int b){
    int c;
    c=a;
    if(a<b){
    c=b;}
    return c;}
int main(){
    int a,b,s;
    printf("ENTER a:");
    scanf("%d",&a);
    input(a);
    printf("ENTER b:");
    scanf("%d",&b);
    input(b);
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
           s=i;
        }0 
    }
    printf("THE GCD OF %d AND %d :%d",a,b,s);
    return 0;
}*/

//METHOD:-2 (BY TEACHER){BEST AND LESS LOAD}

#include <stdio.h>
void input(int in){
     printf("INPUT BY USER:%d\n",in);
     return ;}
int min(int a,int b){
    int c;
    c=a;
    if(a<b){
    c=b;}
    return c;}
int main(){
    int a,b,s;
    printf("ENTER a:");
    scanf("%d",&a);
    input(a);
    printf("ENTER b:");
    scanf("%d",&b);
    input(b);
    for(int i=min(a,b);i<=min(a,b);i--){
        if(a%i==0 && b%i==0){
           s=i;
           break;
        }
    }
    printf("THE GCD OF %d AND %d :%d",a,b,s);
    return 0;
}