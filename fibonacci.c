#include<stdio.h>
int main()
{
    int n,n1=0,n2=1,n3;
    printf("Enter fibonacci series limit\n");
    scanf("%d",&n);
    printf("fibonacci series is as:\n");
    printf("%d %d ",n1,n2);
    for(int i=2;i<n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
        printf("%d ",n3);
    }
    return 0;
}
