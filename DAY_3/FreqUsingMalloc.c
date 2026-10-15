#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num=1202105;
    int *freq=(int *)calloc(10,sizeof(int));
    while(num>0)
    {
        int digit=num%10;
        freq[digit]++;
        num/=10;
    }
    printf("Frequency:\n");
    for(int i=0;i<10;i++)
    {
        printf("Digit %d: %d\n",i,freq[i]);
    }
    free(freq);
    return 0;
}