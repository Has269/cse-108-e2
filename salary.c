#include<stdio.h>
int main ()
{
    int number,hour;
    float amount,SALARY;
    scanf("%d %d %f",&number,&hour,&amount);
    SALARY = hour*amount;
    printf("NUMBER = %d\nSALARY = U$ %0.2f\n",number,SALARY);
    return 0;
}
