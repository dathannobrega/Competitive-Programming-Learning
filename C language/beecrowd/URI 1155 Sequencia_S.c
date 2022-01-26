#include <stdio.h>
 
int main() {
    double a=0,i;
    for (i = 0; i < 100; i++)
    {
        a= a+(1/(i+1));
    }
    printf("%.2lf\n",a);
    return 0;
}