#include<stdio.h>
int main()
{
    int i,mod,n,d=0;
    printf("n>0 :");
    scanf("%d",&n);
    while(n!=0)
    {
      mod=n%10;
      if(mod%2!=0)
      {
          d++;
      }
      n=n/10;
    }
    printf("dem=%d",d);
}
