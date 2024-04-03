#include<stdio.h>
int main()
{
    int code1,unit1,code2,unit2;
    double price1,price2,value1, value2, sum;

    scanf("%d %d %lf", &code1, &unit1, &price1);
    scanf("%d %d %lf", &code2, &unit2, &price2);

    value1 = unit1*price1;
    value2 = unit2*price2;

    sum = value1+value2;

    printf("VALOR A PAGAR: R$ %.2lf\n",sum);

    return 0;
}

