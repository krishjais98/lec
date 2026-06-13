#include <stdio.h>
#include <limits.h>
int main(){
    int n,max=INT_MIN,IImax=INT_MIN;
    printf("Enter The Size of Array:");
    scanf("%d",&n);
    int arr[n];  
    for(int i=0;i<n;i++){
      printf("Enter The Value of %d:",i+1);
      scanf("%d",&arr[i]);
  }
  for(int i=1;i<n;i++){
    if(max<arr[i]){
        IImax=max;
        max=arr[i];
    }
    else if(IImax<arr[i] && arr[i]!=max){
        IImax=arr[i];
  }
}
 printf("THE 2ND MAX NUMBER IS:%d",IImax);
    return 0;
}
