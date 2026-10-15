#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter size\n");
    scanf("%d",&n);
    int **arr=(int**)malloc(n*sizeof(int*));
    for(int i=0;i<n;i++)
    {
        arr[i]=malloc(n*sizeof(int));
    }
    printf("Enter elem\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Print elem\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int top=0,left=0,right=n-1,bot=n-1,k=0,l=0;
    int res[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            res[j][n-1-i] = arr[i][j];
        }
    }
    printf("90 deg\n");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}