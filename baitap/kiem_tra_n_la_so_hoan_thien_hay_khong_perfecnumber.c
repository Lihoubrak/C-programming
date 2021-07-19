#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s=0,d;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      if(n%i==0)
      {
          s=s+i;
          d=s-n;
      }
    }
    if(n==d)
    printf("la so hoan thien");
    else
     printf(" khong la so hoan thien");
    return 0;
}