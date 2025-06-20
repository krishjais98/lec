#include <stdio.h>
int main()
{
    int n,d=2;
    printf("ENTER THE VALUE FOR NUMBER OF 'ODD' COLUMNS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    if(n%2==0){
        printf("!!Error!!\nENTER ODD NUMBER ONLY.");
    }
     else{
          for(int fr=1,de=1;fr<=n;fr++){
              if(fr<=((n+1)/2)){
                if(fr<10){
                 printf("0%d ",fr); // fr=First_Row
        }
        else{
          printf("%d ",fr);
        }
        de=fr-1;
      }
      else{
          if(de<10){
          printf("0%d ",de); // de=Decreasing_Row
        }
        else{
          printf("%d ",de);
        }
        de--;
      }
    }
            printf("\n");
        for(int r=1;r<=((n-1)/2);r++,d+=2){
            for(int c=1,de;c<=n;c++){
                  if(r+c>((n+1)/2) && r+c<(((n+1)/2))+d){
                    printf("   ");
                }
                else{
                  if(c<=((n+1)/2)){
                    if(c<10){
                        printf("0%d ",c);
                    }
                    else{
                        printf("%d ",c);
                    }
                    de=c;
                   }
                  else{
                    if(de<10){
                        printf("0%d ",de);
                    }
                    else{
                        printf("%d ",de);
                    }
                    de--;
                  } 
                }
            }
            printf("\n");
        }
    }
    return 0;
}