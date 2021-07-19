#include<stdio.h>
int main()
{
    int i;
    for(i=1;i<=100;i++)
    {
    	 if(i==5||i==7||i==93)
            continue;
        if(i%2!=0)
        {
            printf("%4d",i);
        }
    }    return 0;
}
