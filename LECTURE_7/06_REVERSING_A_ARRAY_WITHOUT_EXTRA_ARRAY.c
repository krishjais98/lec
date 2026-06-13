#include <stdio.h>
int main(){
    int n;
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the Value of array %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Entered Array:");
     for(int i=0;i<n;i++){
     printf("%d ",arr[i]);
 }
    for(int i=0;i<(n/2);i++){
        arr[n-1-i]=arr[n-1-i]+arr[i];
        arr[i]=arr[n-1-i]-arr[i];
        arr[n-1-i]=arr[n-1-i]-arr[i];
    }
    
    printf("Reversed Array:");
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}