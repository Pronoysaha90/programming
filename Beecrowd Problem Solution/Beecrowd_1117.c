#include <stdio.h>
int main()
{
    double score1, score2;
    double sum = 0;
    int valid_scores = 0;

    while (valid_scores < 2)
    {
        double input;
        scanf("%lf", &input);

        if (input >= 0 && input <= 10)
        {
            sum += input;
            valid_scores++;
        }
        else
        {
            printf("nota invalida\n");
        }
    }

    double average = sum / 2.0;

    printf("media = %.2lf\n", average);

    return 0;
}
