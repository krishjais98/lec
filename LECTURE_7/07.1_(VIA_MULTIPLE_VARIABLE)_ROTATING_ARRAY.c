#include <stdio.h>
int main(){
    int n,k,old,IIold=0,fir=0;
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

    for(int j=1;j<=k;j++){

        old=arr[0];
        fir=arr[n-1];
        for(int i=0;i<n-1;i++){
            IIold=arr[i+1];
            arr[i+1]=old;
            old=IIold;
        }
        arr[0]=fir;

    }
    for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
    return 0;
}