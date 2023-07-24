#include <stdio.h>

int main()
{
    int i,j,n,k=0;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        for(j=i; j<=n+k; j++)
        {
            printf("%d",j);

        }
        k++;
        printf("\n");
    }
}