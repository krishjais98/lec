#include <stdio.h>
int main()
{
    int n,l;
    printf("ENTER THE VALUE FOR NUMBER FOR ROWS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    int d=n+1;
    for(int r=1,s=1;r<=n;r++,d=d+2,s=1){
        for(int c=1;c<=((2*n)-1);c++){
            if(r+c>=n+1 && r+c<=d){
               if(c>n){
                 printf(" %c ",(char)l+64);
                l--;
               }
               else{
                printf(" %c ",(char)s+64);
                s++;
                l=s-2;
               }
            }
            else{
                printf("   ");
            }
        }
        printf("\n");
    }
    return 0;
}