#include <stdio.h>
#include <stdlib.h>

int main() //q21
{
    int m[3][3], i, j,m2[3][3],n=1,x=0;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &m[i][j]);
        }
    }
    for(i=0; i<3; i++)
    {   n=1;
        for(j=0; j<3; j++)
        {
            m2[i][j]=m[3-n][x];
            n++;
        }
        x++;
    }
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d ", m2[i][j]);
        printf("\n");
    }
    return 0;
}

