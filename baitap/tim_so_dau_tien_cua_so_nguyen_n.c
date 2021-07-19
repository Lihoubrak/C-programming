#include<stdio.h>
#include<math.h>
int main()
{
    int n,mod,dt;
    scanf("%d",&n);
        mod=log10(n);
        dt=n/pow(10,mod);
        printf("\n%d",dt);
    return 0;
}