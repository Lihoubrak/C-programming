#include<stdio.h>
int main()
{
    int i,n,dem=0;
    scanf("%d",&n);
    printf("\nCac uoc so le cua so %d la: ",n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            if(i%2!=0)
            printf("%d ",i);
        }
    }
    return 0;
}