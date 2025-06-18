//METHOD 1:-
/*#include <stdio.h>
int main()
{   int n,s;
    printf("ENTER THE VALUE FOR NUMBER OF ROWS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    for(int t=1;t<=n;t++){
         if(t%2!=0){
            s=1;
        }
        else{
            s=0;
        }
        for(int i=1;i<=t;i++){
            if(s==1){
                printf("%d",s);
                s=0;
            }
            else{
                printf("%d",s);
                s=1;
            }
        }
        printf("\n");
    }
    return 0;
}   */



//METHOD 2:-
#include <stdio.h>
int main()
{   int n,s;
    printf("ENTER THE VALUE FOR NUMBER OF ROWS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    for(int i=1;i<=n;i++){
        for(int t=1;t<=i;t++){
            if((i+t)%2==0){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
        
    
    return 0;
}
