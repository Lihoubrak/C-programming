#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,mod,max=1,d=1;
    scanf("%d",&n);
   while(n!=0)
    {
        mod=n%10;
         if(mod==max)
        d++;
        if(mod>max)
        max=mod;
        n=n/10;
    }
    printf("max=%d",max);
    printf("\n%d",d);
    return 0;
}