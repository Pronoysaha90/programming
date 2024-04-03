#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);

    for(i=1 ; i<=n*4;){
        printf("%d %d %d PUM\n",i,(i+1),(i+2));
        i+=4;
    }

    return 0;
}
