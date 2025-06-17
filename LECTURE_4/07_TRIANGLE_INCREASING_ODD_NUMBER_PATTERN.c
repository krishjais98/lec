#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE VALUE OF ROWS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    for(int t=1;t<=n;t++){
        for(int i=1;i<=(2*(t-1)+1);i++){
            if(i%2!=0){
                printf(" %d ",i);
        }else;
    }

        printf("\n");
    }
    return 0;
}