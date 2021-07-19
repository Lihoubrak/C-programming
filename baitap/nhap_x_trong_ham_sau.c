#include<stdio.h>
int main()
{
    float x,fx;
    scanf("%f",&x);
    if(x>=5)
        fx=2*x*x+5*x+9;
    else
    fx=-2*x*x+4*x-9;
    printf("fx=%f",fx);
    return 0;

}