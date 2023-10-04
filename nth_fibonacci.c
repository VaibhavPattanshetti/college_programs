#include <stdio.h>
int main()
{
    int a=0,b=1,c=0,n;
    printf("enter limit\n");
    scanf("%d",&n);
    
    printf("The  %dth number in Fibonacci series is :",n);
    for(int i=1;i<=n;i++)
    {
    a=b;
    b=c;
    c=a+b;
    
    }
    printf("%d",b);
    return 0;
}
