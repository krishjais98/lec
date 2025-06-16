#include <stdio.h>
int main()
{
    int n;
    printf("ENTER THE NUMBER OF LINES TO BE PRINT:");
    scanf("%d",&n);
    printf("INPUT BY THE USER:%d\n");
    for(int i=1;i<=n;i++){
        printf("*****\n");
    }
    return 0;
}