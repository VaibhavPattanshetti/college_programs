#include <stdio.h>
int main()
{
int num,flag=0;
printf("enter number\n"); 
scanf("%d",&num);
printf("prime factors are:");
for(int i=2;i<=num;i++)
{
flag=0;
 if(num%i==0)
 {
 for(int j=2;j<=i/2;j++)
 {
 if(i%j==0)
 flag=1;
 }
 if(flag==0)
 printf("%d  ",i);
 }
}

return 0;

}
