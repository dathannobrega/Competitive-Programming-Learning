#include <stdio.h>

int main ()
{
    int  H, E, A, O, W , X;
    scanf("%d %d %d %d %d %d",&H,&E,&A,&O,&W,&X);
    if ((H+E+A+X+1)> (O+W))
        printf("Middle-earth is safe.\n");
    else 
        printf("Sauron has returned.\n");
     
    return 0;
}