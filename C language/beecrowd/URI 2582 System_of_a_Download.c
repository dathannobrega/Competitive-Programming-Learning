#include<stdio.h>

int main(){
    int i,N,Soma,a,b;
    scanf("%d",&N);
    for (i = 0; i < N; i++)
    {
        scanf("%d %d",&a,&b);
        Soma=a+b;

        if (Soma == 0)
            printf("PROXYCITY\n");
        if (Soma == 1)
            printf("P.Y.N.G.\n");
        if (Soma == 2)
            printf("DNSUEY!\n");
        if (Soma == 3)
            printf("SERVERS\n");
        if (Soma == 4)
            printf("HOST!\n");
        if (Soma == 5)
            printf("CRIPTONIZE\n");
        if (Soma == 6)
            printf("OFFLINE DAY\n");
        if (Soma == 7)
            printf("SALT\n");
        if (Soma == 8)
            printf("ANSWER!\n");
        if (Soma == 9)
            printf("RAR?\n");
        if (Soma == 10)
            printf("WIFI ANTENNAS\n");
    }
    return 0;
}