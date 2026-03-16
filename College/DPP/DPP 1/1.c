#include <stdio.h>
int main(){
    int a=5,b;
    b=((a/2));
    for(int r=1;r<=a;r++){
        for(int c=1;c<=a;c++){
            if(r+c<b+2 || r+c>(2*a)-b) printf("   ");
         else if ( ) { printf(" %d ",r+c);}
        else printf(" * ");} 
        printf("\n");
    }
    return 0;
}