#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE VALUE FOR CROSS ROWS AND COLUMNS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    for(int r=1;r<=n;r++){
        for(int c=1;c<=n;c++){
            if(r==c || (r+c==n+1)){
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