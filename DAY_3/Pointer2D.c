#include<stdio.h>
int main()
{
    int arr[2][3]={{10,20,30},{40,50,60}};
    int (*ptr)[3]=arr;
    printf("%d\n",*(*arr+0)+0);
    printf("%d\n",*(*(arr+0)+1));
    printf("%d\n",*(*(arr+0)+2));
    printf("%d\n",*(*(arr+1)+0));
    printf("%d\n",*(*(arr+1)+1));
    printf("%d\n",*(*(arr+1)+2));
    return 0;
    
}