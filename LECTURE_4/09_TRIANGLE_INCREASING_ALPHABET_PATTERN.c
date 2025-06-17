#include <stdio.h>
int main()
{   int n;
    printf("ENTER THE VALUE TO PRINT THE NUMBER OF ROWS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    for(int t=1;t<=n;t++){
         
        for(int i=1;i<=t;i++){
             char ch=(char)(i+64);
            printf(" %c ",ch);
        }
        printf("\n");

    }
    return 0;
}