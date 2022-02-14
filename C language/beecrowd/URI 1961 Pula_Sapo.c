    #include <stdio.h>

    int main (){
        int a,b,i;
        scanf("%d %d",&a,&b);
        int val[b];
        for (i = 0; i < b; i++)
        {
            scanf("%d",&val[i]);
        }
        for (i = 0; i < b; i++)
        {
            if (i==b-1)
            {
                break;
            }
            
            if (val[i]+a<val[i+1] || val[i]-a>val[i+1] ){
                printf("GAME OVER\n");
                return 0;
            }
        }
        printf("YOU WIN\n");
        return 0;
    }