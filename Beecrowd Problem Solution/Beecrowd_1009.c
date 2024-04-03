#include<stdio.h>
int main()
{
    char ch[100];
    double amount,product,salary;

    scanf("%s %lf %lf",ch,&amount,&product);

    salary = amount+(product*0.15);

    printf("TOTAL = R$ %.2lf\n",salary);

    return 0;
}
