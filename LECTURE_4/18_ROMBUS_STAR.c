#include <stdio.h>
int main()
{   int n;
    printf("ENTER THE VALUE FOR NUMBER FOR NUMBER FOR ROWS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    for(int r=1;r<=n;r++){
        for(int c=1;c<=(2*n-1);c++){
            if(r+c>2*n || r+c<n){
                printf("   ");
            }
            else{
                printf(" * ");
            }
        }
        printf("\n");
    }
    return 0;
}