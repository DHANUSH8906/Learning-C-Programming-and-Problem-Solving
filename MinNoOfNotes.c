#include <stdio.h>
int main()
{
    int y,x;
    printf("Enter bill amount\n");
    scanf("%d", &y);
    printf("Enter amount paid\n");
    scanf("%d", &x);
    int n=x-y;
    printf("Change to be returned: %d\n", n);
    int arr[]={500,100,50,20,10,5,2,1};
    int c=0;
    while(n>0)
    {
        for(int i=0;i<8;i++)
        {
            if(n>=arr[i])
            {
                n-=arr[i];
                c++;
                break;
            }
        }
    }
    printf("Minimum number of notes required: %d\n", c);
    return 0;
}
