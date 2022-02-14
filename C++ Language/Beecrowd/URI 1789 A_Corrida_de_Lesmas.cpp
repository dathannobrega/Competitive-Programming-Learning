#include <stdio.h>//USAR A BIBLIOTECA DE C OIS PRECISA CONFIRMAR EOF

int main()
{
    int lesmas, velo, level;
    while (scanf("%d", &lesmas) != EOF)
    {

        for (int i = 0; i < lesmas; i++)
        {
            scanf("%d",&velo);
            if (velo >= 20)
            {
                level = 3;
            }
            if (velo > 10 && velo < 20 && level != 3)
            {
                level = 2;
            }
            if (velo <= 10 && level != 2 && level != 3)
            {
                level = 1;
            }
        }
        printf("%d\n", level);
        level=0;
    }
    return 0;
}