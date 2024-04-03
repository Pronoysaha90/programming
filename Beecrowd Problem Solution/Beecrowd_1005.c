#include<stdio.h>
int main()
{
    float A,B;
    double avg;
    scanf("%f %f", &A , &B);
    avg = (A*3.5 + B*7.5)/ (3.5+7.5);

    printf("MEDIA = %.5lf\n",avg);

    return 0;
}

