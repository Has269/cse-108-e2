#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int P,V,X,count = 0;
    for(int i=1; i<=t; i++)
    {
        scanf("%d %d %d",&P,&V,&X);
        if((P==1 && V==1) || (V==1 && X==1) || (X==1 && P==1))
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
