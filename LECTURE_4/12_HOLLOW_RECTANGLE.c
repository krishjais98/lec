#include <stdio.h>
int main()
{
    int r,c;
    printf("ENTER  VALUE FOR THE NUMBER OF ROWS:");
    scanf("%d",&r);
    printf("INPUT BY USER:%d\n",r);
    printf("ENTER  VALUE FOR THE NUMBER OF COLUMNS:");
    scanf("%d",&c);
    printf("INPUT BY USER:%d\n",c);
    for(int t=1;t<=r;t++){
        for(int i=1;i<=c;i++){
            if(t==1 || t==r){
                printf(" * ");
            }
            
            else if(i==1 || i==c){
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