#include <iostream>
#include <cstdio>

using namespace std;

int canciones, nivin, maximo;
int listadecanciones[55], dp[50005][55];

int main()
{
    scanf("%d", &canciones);
    for(int i=1; i<=canciones; i++)
    {
        scanf("%d", &listadecanciones[i]);
    }
    scanf("%d%d", &nivin, &maximo);
    dp[nivin][1]=1;
    for(int i=1; i<=canciones; i++)
    {
        for(int j=0; j<=maximo; j++)
        {
            if(dp[j][i] && j-listadecanciones[i]>=0)
                dp[j-listadecanciones[i]][i+1]=1;
            if(dp[j][i] && j+listadecanciones[i]<=maximo)
                dp[j+listadecanciones[i]][i+1]=1;
        }
    }
    for(int j=maximo; j>=0; j--)
    {
        if(dp[j][canciones+1])
        {
            printf("%d\n", j);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}