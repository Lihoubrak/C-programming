#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(sqrt(n)==(int)sqrt((float)n))
    printf("la so chinh phuong");
    else
    printf("Khong phai la so chinh phuong");
    return 0;
}
