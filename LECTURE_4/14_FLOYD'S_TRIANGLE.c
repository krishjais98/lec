#include <stdio.h>
int main()
{
    int n,s=1;
    printf("ENTER THE VALUE FOR NUMBER OF ROWS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    for(int i=1;i<=n;i++){
        for(int t=1;t<=i;t++,s++){
            printf("%d,",s);
        }
        printf("\n");
    }
    return 0;
}


