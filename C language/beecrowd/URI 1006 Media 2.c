#include<stdio.h>
//Esse programa é feito para calcular a media de 3 provas com seus respectivos pesos.
//Notaa = 2x, Notab = 3x e Notac = 5x
int main(){
 double notaa,notab,notac;
 scanf("%lf %lf %lf", &notaa, &notab, &notac);
 printf("MEDIA = %0.1lf\n", ((notaa*2)+(notab*3)+(notac*5))/10 );
 return(0);

}
