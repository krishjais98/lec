#include <stdio.h>
int main()
{   int n;
    
    printf("ENTER THE VALUE FOR NUMBER OF ROWS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    for(int r=1,s=1;r<=n;r++,s=1){
        for(int c=1;c<=n;c++){
            if(r+c>=n+1){
                
                printf(" %c ",(char)(s+64));
                s++;
            }
            else{
                printf("   ");
            }
        }
    printf("\n");
}
    return 0;
}