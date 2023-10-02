#include<stdio.h>
int main()
{
    int t,a,b,c,d,e,f;
    scanf("%d",&t);
    for(int i = 1; i<=t; i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        d=a*a;
        e=b*b;
        f=c*c;

        if((d==e+f)|| (e==d+f) || (f==e+d))
        {
            printf("Case %d: yes\n", i);
        }
        else
        {
            printf("Case %d: no\n", i);
        }
    }
    return 0;


}
