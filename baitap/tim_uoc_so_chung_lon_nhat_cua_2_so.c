#include<stdio.h>
int main()
{
    int i,a,b,gcd;
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=1;i<=a || i<=b;i++)
    {
        if(a%i==0 && b%i==0)
        {
            gcd=i;
        }
    }
    printf("gcd=%d",gcd);
    return 0;
}