#include<stdio.h>
#include<math.h>
int main()
{
    int i,n,mod,dt,rev=0,temp;
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        mod=n%10;
        rev=rev*10+mod;
        n=n/10;
    }
    if(rev==temp)
    printf("la so doi xung");
    else
    printf("khong phai la so doi xung");
    return 0;
}