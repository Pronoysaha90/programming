#include <stdio.h>

int main() {
    int x, sum=0 ,count=0;
    double avg=0;

    while(1){
        scanf("%d",&x);
        if (x<0)
            break;
        else{
            sum+=x;
            count++;
        }

    }

    avg=(float)sum/count;

    printf("%.2lf\n",avg);

    return 0;
}
