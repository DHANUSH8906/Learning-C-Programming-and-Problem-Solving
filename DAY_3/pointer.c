#include<stdio.h>
int main()
{
    int n=10;
    int *ptr=&n;
    int *ptr2=NULL;
    printf("%d\n",n);
    printf("%p\n",(void *)ptr2);
    *ptr=*ptr+10;
    char ch='A';
    char *p=&ch;
    *p='B';
    printf("\n%c",ch);

    int arr[3]={10,20,30};
    int (*ptr3)[3]=&arr;
    printf("\n%d",(*ptr3)[2]);

    int a=10,b=10,c=30;
    int *pt[3]={&a,&b,&c};
    printf("\n%d",*pt[0]);
    printf("\n%d",*pt[1]);
    printf("\n%d",*pt[2]);
}