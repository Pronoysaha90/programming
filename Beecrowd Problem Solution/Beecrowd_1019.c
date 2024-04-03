#include<stdio.h>
int main()
{
    int sec,mint,hours;

    scanf("%d",&sec);

    hours=sec/3600;
    sec=sec%3600;

    mint=sec/60;
    sec=sec%60;

    printf("%d:%d:%d\n",hours,mint,sec);

    return 0;
}
