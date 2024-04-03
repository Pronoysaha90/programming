#include<stdio.h>
int main()
{
    int serial,hours;
    float amount,salary;

    scanf("%d %d %f",&serial,&hours,&amount);

    salary= hours*amount;

    printf("NUMBER = %d\n", serial);
    printf("SALARY = U$ %.2f\n", salary);

    return 0;
}
