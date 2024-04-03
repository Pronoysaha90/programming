#include<stdio.h>
int main()
{
    int i,n[100],highest=0,pos=1;

    for(i=1 ; i<=100 ; i++){
        scanf("%d",&n[i]);
    }

    for(i=1 ; i<=100 ; i++){
        if(highest < n[i]){
            highest=n[i];
            pos=i;
        }
    }

    printf("%d\n",highest);
    printf("%d\n",pos);

    return 0;
}
