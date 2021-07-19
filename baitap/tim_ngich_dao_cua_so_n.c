#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,mod,rev=0;
    scanf("%d",&n);
    printf("So nghich dao :");
   while(n!=0)
   {
        mod=n%10;
        rev=rev*10+mod;
        n=n/10;
    }
    printf("%4d",rev);
    return 0;
}