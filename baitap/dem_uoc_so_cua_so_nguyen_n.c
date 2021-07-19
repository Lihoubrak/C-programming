#include<stdio.h>
int main()
{
    int i,n,dem=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        dem++;
    }
    printf("dem=%d",dem);
    return 0;
}
