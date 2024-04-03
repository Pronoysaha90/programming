#include <stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);

    int i, j;
    for(i = 1; i <= Y; i++) {
        printf("%d", i);
        if(i % X == 0 || i == Y)
            printf("\n");
        else
            printf(" ");
    }

    return 0;
}
