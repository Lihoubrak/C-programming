#include<stdio.h>
int main()
{
    int n,i,mod,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        mod=n%10;
        s=s+mod;
        n=n/10;
    }
    printf("s=%d",s);
    return 0;
}
