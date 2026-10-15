#include<stdio.h>
int rec(int n)
{
    if(n>100)
    {
        return (n-10);
    }
    return rec(rec(n+11));
}
int main()
{
    int n;
    printf("Enter elem:\n");
    scanf("%d",&n);
    int sum=rec(n);
    printf("%d",sum);
}