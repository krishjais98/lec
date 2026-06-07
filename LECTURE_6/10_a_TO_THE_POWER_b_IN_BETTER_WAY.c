#include <stdio.h>
void toh(int n,char s,char h,char d)
{
  if(n==0){
    return;
  }
  toh(n-1,s,d,h);
  printf("%c-->>%c\n",s,d);
  toh(n-1,h,s,d);
  return;
    }
int main(){
    int n;
    printf("ENTER THE NUMBER OF DISK:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
   
  toh(n,'A','B','C');
    return 0;
}