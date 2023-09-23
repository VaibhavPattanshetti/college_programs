#include<stdio.h>
int main()
{
int a[5],sum=0;
float per;
printf("enter marks of 5 subjects\n");
for(int i=1;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(int i=1;i<=5;i++)
{
sum=sum+a[i];
}
per=sum/5;
printf("percentage:%.2f\n",per);

if(per>=90)
{
printf("Grade A");
}
else if(per>=80)
{
printf("Grade B");
}
else if(per>=70)
{
printf("Grade C");
}
else if(per>=60)
{
printf("Grade D");
}
else if(per>=40)
{
printf("Grade E");
}
else 
{
printf("Grade F");
}
return 0;
}
