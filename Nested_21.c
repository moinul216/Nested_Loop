#include <stdio.h>

int main()
{
    int n,sum=1;
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(j<=n-i)
            {
                printf(" ");
            }
            else
            {
                for(int k=1; k<=sum; k++)
                {
                    printf("*");
                }
                sum += 2;
                break;
            }
        }
        printf("\n");
    }
}
