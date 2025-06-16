#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE VALUE OF ROWS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    for(int t=1;t<=n;t++){
        for(int i=1;i<=n-(t-1);i++){
            printf(" %d ",i);
        }
        printf("\n");
    }
    return 0;
}