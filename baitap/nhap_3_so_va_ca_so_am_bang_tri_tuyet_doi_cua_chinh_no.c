#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;
    scanf("%f",&a);
    scanf("%f",&b);
    scanf("%f",&c);
    if(a<0 || b<0 || c<0)
    {
        a=fabs(a);
        b=fabs(b);
        c=fabs(c);
    }
    printf("%f %f %f",a,b,c);

}