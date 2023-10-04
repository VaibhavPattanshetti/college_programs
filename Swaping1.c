#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("enter value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("value of a and b before swaping: a=%d b=%d\n",a,b);
    
    temp=a;
    a=b;
    b=temp;
    printf("value of a and b after swaping: a=%d b=%d",a,b);
    return 0;
}
