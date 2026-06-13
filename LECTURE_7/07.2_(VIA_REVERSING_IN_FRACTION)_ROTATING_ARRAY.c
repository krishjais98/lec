#include <stdio.h>
void rev(int arr[],int a,int b){
    
    for(int i=a,j=b;i<j;i++,j--){
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
    }
}
int main(){
    int n,k;
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the Value of array %d:",i+1);
        scanf("%d",&arr[i]);
    }
printf("Enter the Number of Rotation:");
scanf("%d",&k);
if(k>n){
    k=k%n;
}

    rev(arr,0,n-1);
    rev(arr,0,k-1);
    rev(arr,k,n-1);

    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
}
    return 0;
}