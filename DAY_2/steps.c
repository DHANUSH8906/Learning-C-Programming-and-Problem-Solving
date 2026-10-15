#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
bool reaches(int *arr, int n);
int main()
{
    int n;
    printf("Enter no of pillars\n");
    scanf("%d",&n);
    printf("Enter value of each pillar\n");
    int *arr=malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(reaches(arr,n))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    free(arr);
    return 0;
}
bool reaches(int *arr,int n)
{
    int maxReach = 0;

    for (int i = 0; i < n; i++) {
        if (i > maxReach) {
            return false;
        }

        if (i + arr[i] > maxReach) {
            maxReach = i + arr[i];
        }

        if (maxReach >= n - 1) {
            return true;
        }
    }

    return true;
}