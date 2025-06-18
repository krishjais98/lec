#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE VALUE FOR NUMBER OF ROWS:");
    scanf("%d",&n);
    printf("INPUT BR USER:%d\n",n);
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n;c++){
            if(r+c>=n+1){
                printf(" * ");

            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}