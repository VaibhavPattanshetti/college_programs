#include <stdio.h>
int main()
{
int q,dnum,i=1,j;
int oct[50];
printf("enter the decimal number\n");
scanf("%d",&dnum);
q=dnum;
while (q>0)
{
oct[i++]=q%8;
q=q/8;
}
printf("octal number of given decimal number is :");
for(j=i-1;j>0;j--)
{
printf("%d",oct[j]);
}
return 0; 
}
