#include<stdio.h>
int main()
{
   double radius, pi=3.14159,volume;

   scanf("%lf",&radius);

   volume=(4/3.0)*pi*(radius*radius*radius);

   printf("VOLUME = %.3lf\n",volume);

    return 0;
}

