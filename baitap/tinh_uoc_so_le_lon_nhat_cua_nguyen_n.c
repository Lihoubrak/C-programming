#include<stdio.h>
int main()
{
    int i,n,dem=0,max=1;
    scanf("%d",&n);
    printf("\nCac uoc so le cua so %d la: ",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(i%2!=0)
            {
            	printf("%d ",i);
                if(i>max)
                max=i;
			}
        }
    }
      printf("\nmax=%d",max);
    return 0;
}
