#include <stdio.h>
int main()
{
    int i= 0,j = 0,n=0;
    do{
    printf("Height");
    scanf("%i",&n);
    }
    while(n<=0);
    for(i=1; i<=n; i++)
    {
        for(j=i; j<n; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    return 0;
}
