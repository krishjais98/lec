#include <stdio.h>
int main()
{   int n;
    printf("ENTER THE VALUE FOR NUMBER ROWS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    for(int t=1;t<=n;t++){
        if(t%2!=0){
            for(int i=1;i<=t;i++){
            printf("%d",i);
        }printf("\n");
    }
    
    else{for(int i=1;i<=t;i++){
            char ch=(char)(i+64);
            printf("%c",ch);
        }printf("\n");
    }
}

}