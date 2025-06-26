//METHOD 1:VERY CALCUL
/* #include <stdio.h>
void input(int in){printf("INPUT BY USER:%d\n",in);}
int fact(int in){
        int out=1;
        for(in;in>1;in--){out=out*in;}
        return out;}
void space(int n,int r){
         for(int i=1;i<(n-r);i++){
         printf(" ");}
         return;}
int main(){
    int n;
    printf("ENTER THE VALUE FOR NUMBER OF ROWS:");
    scanf("%d",&n);
    input(n);
    for(int r=0;r<n;r++){
          space(n,r);
        for(int c=0;c<=r;c++){
            int nCr=(fact(r)/(fact(c)*fact(r-c)));
              printf("%d ",nCr);
        }
        printf("\n");
    }
    return 0;
}   */

//METHOD 2:MOST EFFECTIVE LESS CALCUL
#include <stdio.h>
void input(int in){printf("INPUT BY USER:%d\n",in);}
void space(int n,int r){
         for(int i=0;i<(n-r);i++){
         printf(" ");}
         return;}
int main(){
    int n;
    printf("ENTER THE VALUE FOR NUMBER OF ROWS:");
    scanf("%d",&n);
    input(n);
    for(int r=0;r<n;r++){
          space(n,r);
           float a=1;
        for(float c=0;c<=r;c++){
            int t=a;
             printf("%d ",t);
           a=a*((r-c)/(c+1));    
        }
        printf("\n");
    }
    return 0;
}