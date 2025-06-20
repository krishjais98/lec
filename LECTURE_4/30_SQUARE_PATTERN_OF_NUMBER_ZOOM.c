#include <stdio.h>
int main()
{
    int n,rc,s;
    printf("ENTER THE VALUE FOR SQUARE NUMBER ZOOM:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
            rc=((2*n)-1);     
    for(int r=1,drop=0;r<=rc;r++){
        if(r<=n){drop=(r-1);}
        else{drop=(2*n)-(r+1);}
        s=n;
        for(int c=1;c<=rc;c++){
                if(c<n){printf(" %d ",s);
                       if(drop>0){s=s-1;}else;
                       drop--;}
                else{printf(" %d ",s);
                     if(drop>=0){s=s+1;}else;
                     drop++;}
        }  
        printf("\n");
    }
    return 0;
}