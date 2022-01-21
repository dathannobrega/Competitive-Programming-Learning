#include<stdio.h>
int main ()
{
    float salary,percent,news;
    percent = 0.1;
    scanf("%f",&salary);
    news = salary;
    if (salary>=0 && salary<=400.00)
    {
        percent =0.15;
        news = salary*percent;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",(news+salary),news,percent*100);
    }else if (salary>400 && salary<=800)
    {
        percent =0.12;
        news = salary*percent;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",(news+salary),news,percent*100);
    }else if (salary>800 && salary<=1200)
    {
        percent =0.1;
        news = salary*percent;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",news+salary,news,percent*100);
    }else if (salary>1200 && salary<=2000)
    {
        percent =0.07;
        news = salary*percent;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",news+salary,news,percent*100);
    }else if (salary>2000)
    {
        percent =0.04;
        news = salary*percent;
        printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: %.0f %%\n",news+salary,news,percent*100);
    }
    return 0;
}