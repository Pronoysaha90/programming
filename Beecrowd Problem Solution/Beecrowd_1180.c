#include<stdio.h>
int main()
{
    int a[1000],n,i,pos=1;

    scanf("%d",&n);

    for(i=0 ; i<n ; i++){
        scanf("%d",&a[i]);
    }

    int lowest=a[0];
    for(i=0 ; i<n ; i++){
        if(lowest>a[i]){
            lowest=a[i];
        pos=i;
        }
    }

    printf("Menor valor: %d\n",lowest);
    printf("Posicao: %d\n",pos);

    return 0;
}
