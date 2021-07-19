#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,mod,d=0,dt;
    scanf("%d",&n);
    dt=n/pow(10,log10(n));
   for(i=1;i<=n;i++)
    {
        mod=n%10;
        if(mod%2!=0)
        d++;
        n=n/10;
    }
    if(d==log10(n) || dt%2!=0)
    printf("toan la so le");
    else
    printf("khong la toan so le");
}