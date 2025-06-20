  #include <stdio.h>
  int main()
  {
    int n,d=0,s;
    printf("ENTER THE VALUE FOR ODD NUMBER OF ROWS:");
    scanf("%d",&n);
    printf("INPUT BY USER:%d\n",n);
    if(n%2==0){
        for(int r=1;r<=n;r++,d=d+2,s=s+2){
            for(int c=1;c<=n;c++){
                if((r<=(n/2))){
                    if(((n/2)+1)<=r+c && r+c<=((n/2)+2)+d){
                    printf(" * ");
                    }
                    else{
                        printf("   ");
                    }
                }
                else{
                    if(r==((n/2)+1)){
                        s=((n/2)+1);
                    }
                     
                        if( r+c>s && ((r+c)<=(n+((n/2)+1)))){
                        printf(" * ");
                     }
                     else{
                          printf("   ");
                     }
                    
                }
            }
            printf("\n");
        }
    }
    else{
        for(int r=1;r<=n;r++,d=d+2,s=s+2){
        for(int c=1;c<=n;c++){
            if(r<=(n+1)/2){
                if(r+c>=(((n+1)/2)+1) && r+c<=(((n+1)/2)+1)+d){
                    printf(" * ");
                }
                else{
                    printf("   ");
                }
            }
            else{
                
                 if(r==(((n+1)/2)+1)){
                   s=(((n+1)/2)+2); 
                 }
                  else;
                      if(r+c<=(((n+1)/2)+n) && r+c>s){ 
                        printf(" * ");  
            }
                else{
                    printf("   ");
                }
            }
        }
        printf("\n");
    }
}
    return 0;
  }