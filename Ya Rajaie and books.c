#include<stdio.h>
int main()
{
    long long int n;
    int M,N,T;
    scanf("%d",&T);
    for(int i=1; i<=T; i++)
    {
        scanf("%lld",&n);
        if(n%5==0)
        {
            M=n/5;
            printf("%d\n",M);
        }
        else
        {
            M=(n/5)+1;
            printf("%d\n",M);

        }
    }
    return 0;
}
