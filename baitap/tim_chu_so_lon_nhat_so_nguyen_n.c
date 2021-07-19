#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,mod,max;
    scanf("%d",&n);
    max=n/pow(10,log10(n));
    while(n!=0)
    {
        mod=n%10;
        if(mod>max)
        max=mod;
        n=n/10;
    }
    printf("max=%d",max);
    return 0;
}