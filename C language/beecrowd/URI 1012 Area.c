#include <stdio.h>
int main()
{
    int hri, mini, hrf, minf, hr_total, min_total;
    scanf("%d %d %d %d", &hri, &mini, &hrf, &minf);
    hr_total = (hrf - hri);
    min_total = (minf - mini);
    if (min_total<0)
    {
        hr_total -= 1;
        min_total += 60;
    }

    if (hr_total < 0)
        hr_total += 24;
    if (hr_total == 0 && min_total == 0)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    else if (hr_total < 0)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr_total,
               min_total);
    }
    else if (hr_total < 0)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",hr_total,
               min_total);
    }
    else if (hr_total > 0||hr_total == 0 )
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hr_total,
               min_total);
    }
    return 0;
}