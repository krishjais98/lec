#include <stdio.h>
int main()
{   int n;
    printf("ENTER THE VALUE FOR NUMBER OF ROW AND COLUMNS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    for(int t=1;t<=n;t++){
        for(int i=1;i<=n;i++){
        printf(" %d ",i);
    }
           printf("\n");
   }
    return 0;
}