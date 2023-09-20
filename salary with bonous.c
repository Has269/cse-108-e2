#include<stdio.h>
int main ()
{
    float salary,value,TOTAL;
    char name;
    scanf("%s%f%f",&name,&salary,&value);
    TOTAL = salary+value*.15;
    printf("TOTAL = R$ %.2f\n",TOTAL);
    return 0;
}
