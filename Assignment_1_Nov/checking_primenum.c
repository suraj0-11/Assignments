#include<stdio.h>
#include<math.h>
void main()
{
    int n,n1,n2,count,i;
    printf("Enter your number to check if it is prime : ");
    scanf("%d",&n);
    n1 = ceil(sqrt(n));
    n2 = n;
    for(i=2;i<=n1;i++)
    {
        if(n2%i==0)
        count = 0;
    }
    if((count == 0 && n2!=0) || n2 == 2 || n2 == 3)
    {
        printf("%d is not a prime number",n2);
    }
    else
    {
        printf("%d is a prime number",n2);
    }
}