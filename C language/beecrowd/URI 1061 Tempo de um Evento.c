#include<stdio.h>
int main()
{
    int diai,diaf,hri,hrf,mini,minf,segi,segf,dia_total,hr_total,min_total,seg_total;
    scanf("Dia %d\n%d : %d : %d\nDia%d\n%d : %d : %d",&diai,&hri,&mini,&segi,&diaf,&hrf,&minf,&segf);
    //SOmando os valors de tempo para fazer conversar
    dia_total = diaf-diai;
    hr_total  = hrf-hri;
    min_total = minf-mini;
    seg_total = segf-segi;
    //Fazendo conversoes necessaria  
    if (min_total<0)
    {
        hr_total--;
        min_total+=60 ;
    }if (seg_total<0)
    {
        min_total--;
        seg_total+=60;
    }if (hr_total<0)
    {
        dia_total--;
        hr_total+=24;
    }
        printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",dia_total,hr_total,min_total,seg_total); 
    return 0;

}