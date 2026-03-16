// DPP_2_QUESTION_1_&_2

#include <stdio.h>
int main()
{
    int n,s,c,ans,total=0;
    printf("Enter the Integer value:");
    scanf("%d",&n);
    for(int i=10,d=1;n/i!=0;i=i*10,d=d*10){
        s=n/i;
        c=s*i;
        ans=(n-c)/d;
        printf("%d",ans);
        total=ans+total;
    }
    printf("%d\nTotal:%d\n",s,total+s);
    return 0;
}