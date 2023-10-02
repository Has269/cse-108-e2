#include<stdio.h>
int main()
{
    int a,b,a1,b1,sum =0;
    scanf("%d %d", &a, &b);
    sum=(a+b)-1;
    a1=sum-a;
    b1=sum-b;
    printf("%d %d\n",a1,b1);
    return 0;
}
