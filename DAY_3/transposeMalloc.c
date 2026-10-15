#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter number of rows\n");
    scanf("%d",&n);
    int **arr=(int **)malloc(n*sizeof(int *));
    for(int i=0;i<n;i++)
    {
        arr[i]=(int *)malloc((i+1)*sizeof(int));
    }
    printf("Enter elements\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Elements are\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    printf("Transpose:\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}