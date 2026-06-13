#include <stdio.h>
int main(){
    int n,x,count=0;
    printf("Enter The Size of Array:");
    scanf("%d",&n);
    printf("Enter The Value of x:");
    scanf("%d",&x);
    int arr[n];  
    for(int i=0;i<n;i++){
        printf("Enter The Value of %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((arr[i]+arr[j])==x){
                count++;
                printf("%d. Pair of Number is:(%d %d)\n",count,arr[i],arr[j]);
            }
        }
  }
    return 0;
}