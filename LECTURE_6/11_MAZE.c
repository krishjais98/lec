#include <stdio.h>
int maze(int r,int c,int pr,int pc){
    if(pr>r || pc>c){return 0;}
    if(pr==r || pc==c){return 1;}

    return maze(r,c,pr+1,pc)+maze(r,c,pr,pc+1);
}
int main(){
    int r,c;
    printf("ENTER THE VALUE FOR NUMBER OF ROWS:");
    scanf("%d",&r);
    printf("INPUT BY USER:%d\n",r);
    printf("ENTER THE VALUE FOR NUMBER OF ROWS:");
    scanf("%d",&c);
    printf("INPUT BY USER:%d\n",c);
    printf("%d",maze(r,c,1,1));
    return 0;
}