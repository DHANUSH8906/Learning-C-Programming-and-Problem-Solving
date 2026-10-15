#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int main()
{
    int (*ptr)(int,int)=add;
    int sum=ptr(10,20);
    printf("%d",sum);

    int x=10;
    int *const p=&x;
    *p=50;
    printf("\n%d",x);
}