#include<stdio.h>
int main()
{
    int value,d;
    scanf("%d",&value);

    printf("%d ano(s)\n",value/365);
    d=(value%365);

    printf("%d mes(es)\n",d/30);
    d=(d%30);

    printf("%d dia(s)\n",d);

    return 0;
}
