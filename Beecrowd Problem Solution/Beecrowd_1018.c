#include<stdio.h>
int main()
{
    int notes,d;
    scanf("%d",&notes);

    printf("%d\n",notes);

    printf("%d nota(s) de R$ 100,00\n",notes/100);
    d=(notes%100);

    printf("%d nota(s) de R$ 50,00\n",d/50);
    d=(d%50);

    printf("%d nota(s) de R$ 20,00\n",d/20);
    d=(d%20);

    printf("%d nota(s) de R$ 10,00\n",d/10);
    d=(d%10);

    printf("%d nota(s) de R$ 5,00\n",d/5);
    d=(d%5);

    printf("%d nota(s) de R$ 2,00\n",d/2);
    d=(d%2);

    printf("%d nota(s) de R$ 1,00\n",d/1);

    return 0;
}
