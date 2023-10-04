#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("enter value of a and b\n");
    scanf("%d%d",&a,&b);
    printf("value of a and b before swaping: a=%d b=%d\n",a,b);
    
    a=a+b;
    b=a-b;
    a=a-b;
    printf("value of a and b after swaping: a=%d b=%d",a,b);
    return 0;
}
