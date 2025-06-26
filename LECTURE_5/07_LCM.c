#include <stdio.h>
int main(){
    int n,s;
    printf("ENTER THE POSITIVE INTEGER:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    s=n;
    for(int i=2;i<=n;){
        if(n%i==0){
            printf("%d, ",i);
            n=n/i;
            i=i;
        }
        else{i++;}
    }
    printf("<-- THESE ARE THE PRIME FACTORS OF %d",s);
    return 0;
}