#include<stdio.h>
int main()
{
    int n,a,b,sum=0,temp;

    scanf("%d",&n);

    for(int i=1 ; i<=n ; i++){
            sum=0;
        scanf("%d %d",&a,&b);
        if(a>b){
            temp=a;
            a=b;
            b=temp;
        }

        for(int j=a+1 ; j<b ; j++){
            if(j%2!=0){
                sum+=j;
            }
        }

        printf("%d\n",sum);
    }

    return 0;
}
