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
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=max+arr[i];
            arr[i]=max-arr[i];
            max=max-arr[i];
        }
    }
    for(int i=0;i<n;i++){
        if(IImax<arr[i] && IImax<max){
              IImax=IImax+arr[i];
              arr[i]=IImax-arr[i];
              IImax=IImax-arr[i];
        }
    }
    printf("\nThe 2nd Max is:%d",IImax);
    return 0;
}