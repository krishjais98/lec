#include <stdio.h>
int main(){
    int n;
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    int arr[n],rev[n];
    for(int i=0;i<n;i++){
        printf("Enter the Value of array %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        rev[n-1-i]=arr[i];
    }
    for(int i=0;i<n;i++){
        printf("%d ",rev[i]);
    }
    return 0;
}