#include<stdio.h>
int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s",str);
    int hash[26]={0};
    for(int i=0;str[i]!='\0';i++)
    {
        char ch=str[i];
        if(ch>='a'&&ch<='z')
        {
            int index=ch-'a';
            hash[index]++;
        }
        if(ch>='A'&&ch<='Z')
        {
            int index=ch-'A';
            hash[index]++;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(hash[i]>0)
        {
            printf("Frequency of %c is %d\n",i+'a',hash[i]);
        }
    }

}