#include<stdio.h>
int main()
{
    char text[]="REVA";
    char *ptr=text;
    printf("%c\n",*ptr);
    while(*ptr!='\0')
    {
        printf("%c",*ptr);
        ptr++;
    }
}