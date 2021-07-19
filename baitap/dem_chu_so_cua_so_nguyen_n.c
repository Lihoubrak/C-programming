#include<stdio.h>
#include<math.h>
int main()
{
    int n,mod,i,d=0,hg;
    scanf("%d",&n);
    while(n!=0)
    {
        mod=log10(n);
        d++;
        n=n/10;
    }
    printf("dem=%d",d);
    printf("Hello World");
    return 0;
}