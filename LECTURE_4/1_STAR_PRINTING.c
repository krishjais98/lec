#include <stdio.h>
int main()
{
    int n,m;
    printf("ENTER THE VALUE FOR PRINTING NUMBERS OF STAR IN A ROW:");
    scanf("%d",&n);
    printf("INPUT BY THE USER:%d\n",n);

    printf("ENTER THE VALUE FOR PRINTING NUMBERS OF COLUMNS:");
    scanf("%d",&m);
    printf("INPUT BY THE USER:%d\n",m);

    for(int t=1;t<=n;t++){
        for(int i=1;i<=m;i++){
        printf(" * ");}
        printf("\n");
    }
    return 0;
}