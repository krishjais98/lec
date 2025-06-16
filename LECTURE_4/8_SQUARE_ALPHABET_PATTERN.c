#include <stdio.h>
int main()
{   int n;
   
    printf("ENTER THE VALUE FOR NUMBER OF ROW AND COLUMNS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    for(int t=1;t<=n;t++){
        char ch='A';
        for(int i=1;i<=n;i++,ch++){
            char CH= (char)ch;
        printf(" %c ",CH);
    }
           printf("\n");
   }
    return 0;
}