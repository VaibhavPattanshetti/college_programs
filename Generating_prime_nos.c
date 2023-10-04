#include <stdio.h>
int main()
{
int num,n, flag;
printf("enter limit\n");
scanf("%d",&n);
for(num=2;num<=n;num++)
{
flag=0;
for(int i=2;i<=num/2;i++)
{
if(num%i==0)
flag=1;
}
if(flag!=1)
{
printf("%d\n",num);
}
}
return 0; 
}
