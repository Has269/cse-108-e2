#include<stdio.h>
int main()
{
    int i,n,x,y,res,sum=0;
    scanf("%d %d",&x,&y);
    if(x>y)
    {
        res=y;
        y=x;
        x=res;
    }
    if(x%2 == 0)
    {
        x++;
        n=x;
    }
    else
    {
        n = x+2;
    }
    for(i = n; i < y ; i += 2)
    {
        sum = sum + i;
    }
    printf("%d\n",sum);
    return 0;
}


