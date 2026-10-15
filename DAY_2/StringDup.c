#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="abcd";
    int hash[26]={0};
    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        int index=ch-'0';
        if(hash[index]>0)
        {
            printf("Duplicate");
            return 0;
        }
        else
        {
            hash[index]++;
        }
    }
    printf("Not dup");
    return 0;
}