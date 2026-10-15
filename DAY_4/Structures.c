#include <stdio.h>
typedef struct
{
    char village[100];
    int pc;
} Address;
typedef struct
{
    int id;
    char name[50];
    float share_cap;
    Address adr;
} Member;
int main()
{
    int n;
    printf("Enter no of members\n");
    scanf("%d", &n);
    if (n <= 0 || n > 200)
    {
        printf("Invalid input\n");
        return 0;
    }
    Member mem[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter details of member %d\n", i + 1);
        printf("Enter id\n");
        scanf("%d", &mem[i].id);
        printf("Enter name\n");
        scanf("%s", mem[i].name);
        printf("Enter share cap\n");
        scanf("%f", &mem[i].share_cap);
        printf("Enter village name\n");
        scanf("%s", mem[i].adr.village);
        printf("Enter postal code\n");
        scanf("%d", &mem[i].adr.pc);
    }
    printf("Members info: \n");
    for (int i = 0; i < n; i++)
    {
        printf("\nMember %d\n: ", i + 1);
        printf("ID: %d ", mem[i].id);
        printf("NAME: %s ", mem[i].name);
        printf("SHARE CAPITAL: %.2f ", mem[i].share_cap);
        printf("VILLAGE NAME: %s ", mem[i].adr.village);
        printf("POSTAL CODE: %d", mem[i].adr.pc);
    }
    int max = 0;
    for (int i = 1; i < n; i++)
    {
        if (mem[i].share_cap > mem[max].share_cap)
        {
            max = i;
        }
    }
    printf("\nMember with highest share capital: \n");
    printf("Member %d: ", max + 1);
    printf("ID: %d ", mem[max].id);
    printf("NAME: %s ", mem[max].name);
    printf("SHARE CAPITAL: %.2f ", mem[max].share_cap);
    printf("VILLAGE NAME: %s ", mem[max].adr.village);
    printf("POSTAL CODE: %d ", mem[max].adr.pc);
    return 1;
}
