#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int arr[n];
    printf("Enter elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",(arr+i));
    }
    printf("Elements are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
    return 0;
}