#include <stdio.h>
int main()
{
    int n,s=0;
    printf("ENTER THE VALUE FOR NUMBER FOR ROWS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    for(int i=1;i<=n;i++){
        for(int t=1;t<=i;t++,s++){
            printf("%d,",(2*s+1));
        }
        printf("\n");
    }
    return 0;
}