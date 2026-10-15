#include<stdio.h>
#include<stdlib.h>
int main()
{
    int m,n;
    printf("Enter row and col\n");
    scanf("%d%d",&m,&n);
    int **arr=(int **)malloc(m*sizeof(int *));
    for(int i=0;i<m;i++)
    {
        arr[i]=(int *)malloc(n*sizeof(int));
    }
    printf("Enter elements\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    // Print the matrix
    printf("The matrix is:\n");
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    int top=0,left=0,bot=m-1,right=n-1;
    while(top<=bot&&left<=right)
    {
        for(int i=left;i<=right;i++)
        {
            printf("%d ", arr[top][i]);
        }
        top++;
        for(int i=top;i<=bot;i++)
        {
            printf("%d ", arr[i][right]);
        }
        right--;
        if(top<=bot)
        {
            for(int i=right;i>=left;i--)
            {
                printf("%d ", arr[bot][i]);
            }
            bot--;
        }
        if(left<=right)
        {
            for(int i=bot;i>=top;i--)
            {
                printf("%d ", arr[i][left]);
            }
            left++;
        }
    }
    printf("\n");
}