#include <stdio.h>
    void input(int in){      
               printf("INPUT BY USER:%d\n",in);
               return ;
    }
    int fact(int in){
        int out=1;
        for(in;in>1;in--){out=out*in;}
        return out;
    }
int main(){
    int n,r;
    printf("ENTER n:");
    scanf("%d",&n);
    input(n);
    printf("ENTER r:");
    scanf("%d",&r);
    input(r);
    int nCr=(fact(n)/(fact(r)*fact(n-r)));
    printf("%d=%d/(%d)*(%d)\n",nCr,fact(n),fact(r),fact(n-r));
    return 0;
}