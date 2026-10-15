#include<stdio.h>
#include <stdlib.h>
int eatingSpeed(int *bunches,int n,int h)
{
    int l=1,right=0;
    for(int i=0;i<n;i++)
    {
        if(bunches[i]>right)
        {
            right=bunches[i];
        }
    }
    int speed=right;
    while(l<=right)
    {
        int mid=(l+right)/2;
        long long time=0;
        for(int i=0;i<n;i++)
        {
            time += (bunches[i] + (long long)mid - 1) / mid;
        }
        if(time<=h)
        {
            speed=mid;
            right=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return speed;
}
int main()
{
    int n,h;
    printf("Enter number of bunches and hours\n");
    scanf("%d %d",&n,&h);
    int *bunches=malloc(n*sizeof(int));
    printf("Enter number of bananas in each bunch\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&bunches[i]);
    }
    int speed=eatingSpeed(bunches,n,h);
    printf("Minimum eating speed is %d\n",speed);
    free(bunches);
    return 0;
}