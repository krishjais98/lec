#include <stdio.h>
int main()
{   int n;
    printf("ENTER THE VALUE FOR NUMBER OF ODD ROWS(VALUE MUST>1):");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    for(int t=1;t<=n;t++){
           
            if(((n+1)/2)==t){
                for(int i=1;i<=n;i++){
                printf("*");
            }
        }
           else{
            for(int k=1;k<=n;k++){
                if(k==((n+1)/2)){
                    printf("*");
                }
                else{
                    printf("#");
                }
            }
           }printf("\n");
          
    }
    return 0;
}