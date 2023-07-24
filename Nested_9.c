#include <stdio.h>

int main()
{
    int n; 
    scanf("%d",&n);

    for(int i=1; i<=n; i++)
    {
        if(i%2==1)
        {
        for(int j=1; j<=n; j++)
        {
            if(j%2==0)
            {
                printf("0");
            }

            else
            {
                printf("1");
            }
        }
        }
        else
        {
            for(int j=1; j<=n; j++)
        {
            if(j%2==1)
            {
                printf("0");
            }

            else
            {
                printf("1");
            }
        }

        }
        printf("\n");
    }
}