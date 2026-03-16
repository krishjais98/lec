#include <stdio.h>
int main()
{   int a,n;
    printf("ENTER THE VALUE FOR NUMBER FOR NUMBER FOR ROWS:");
    scanf("%d",&a);
    printf("INPUT BY USER:%d\n",a);
    n=a-1;
    for(int r=0;r<=n;r++){
        for(int c=0;c<=(2*n);c++){
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