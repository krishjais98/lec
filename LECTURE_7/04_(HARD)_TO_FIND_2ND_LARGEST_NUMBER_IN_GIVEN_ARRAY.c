#include <stdio.h>
int main(){
    int n;
    printf("Enter The Size of Array:");
    scanf("%d",&n);
    int arr[n];  
    for(int i=0;i<n;i++){
        printf("Enter The Value of %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                arr[i]=arr[i]+arr[j];
                arr[j]=arr[i]-arr[j];
                arr[i]=arr[i]-arr[j];
            }
        }
    }  
    int IImax=0;
       for(int i=0;i<n;i++){
        if(arr[i]<arr[n-1]){
            IImax=arr[i];
        }
 }
        printf("THE 2ND LARGEST NUMBER IS:%d",IImax);
    return 0;
}