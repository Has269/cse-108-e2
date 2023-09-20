#include<stdio.h>
int main ()
{
    int x,y,z,max;
    scanf("%d %d %d",&x,&y,&z);
    max = x;
    if((x<y) || (x<z))
    {
        if(y<z)
        {
            max = z;
        }
        else
        {
            max = y;
        }
    }
    printf("%d eh o major\n", max);
    return 0;
}
