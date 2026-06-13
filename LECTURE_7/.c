#include <stdio.h>
#include<stdbool.h>
int main(){
    int n;
    printf("ENTER THE SIZE OF ARRAY:");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the Value of array %d:",i+1);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        bool flag=false;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j] && i!=j){
                flag=true;
            }
        }
            if(flag==false){
                printf("%d is Unique element in array",arr[i]);
                break;
            }
        
    }

    return 0;
}