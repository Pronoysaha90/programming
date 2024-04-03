#include<stdio.h>
int main()
{
    int n1,n2,sum=0,temp;

    scanf("%d %d",&n1,&n2);

    if(n1>n2){
        temp=n1;
        n1=n2;
        n2=temp;
    }

    for(int i=n1 ; i<=n2 ; i++){
        if(i%13!=0)
            sum+=i;
    }

    printf("%d\n",sum);

    return 0;
}
