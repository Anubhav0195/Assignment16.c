#include<stdio.h>
int main()
{
    int i,j,k,a1[10][10],rsum[10],csum[10],n;
    printf("Input the size of the square matrix:");
    scanf("%d",&n);
    printf("Input elements in the first matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("Elements [%d],[%d]:",i,j);
            scanf("%d",&a1[i][j]);
        }
    }
    printf("The matrix is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",a1[i][j]);
            printf("\n");
        }
    }
    /*sum of rows */
    for(i=0;i<n;i++)
    {
        rsum[i]=0;
        for(j=0;j<n;j++)
        {
            rsum[i]=rsum[i]+a1[i][j];
        }
    }
    /* sum of column*/
    for(i=0;i<n;i++)
    {
        csum[i]=0;
        for(j=0;j<n;j++)
        {
            csum[i]=csum[i]+a1[j][i];
        }
    }
    printf("The sum of rows and column of the matrix is :\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("% 4d",a1[i][j]);
            printf("% 8d",rsum[i]);
            printf("\n");

        }
        printf("\n");
        for(j=0;j<n;j++)
        {
            printf("%4d",csum[j]);
        }
        printf("\n\n");
    }

}