#include <stdio.h>
#include <string.h>
#include<stdlib.h>

typedef struct
{
    char name[8];
    char number[12];
    struct list *next;
} list;

list *addUser(list *first)
{
    while (1)
    {
        getchar();
        list *flag = first;
        list *temp = malloc(sizeof(list));
        temp->next = NULL;
        printf("Input name:");
        scanf("%s", temp->name);
        printf("Input phone number:");
        scanf("%s", temp->number);
        while (strlen(temp->number) < 11)
        {
            printf("Mobile phone number is short,please input again:");
            scanf("%s", temp->number);
        }
        getchar();
        list *qian = NULL;
        for (; flag && strcmp(flag->name, temp->name) < 0; qian = flag, flag = flag->next);
        if (qian == NULL && first == NULL)
        {
            first = temp;
            char ch;
            printf("Continue?(Y/N)");
            ch = getchar();
            getchar();
            if (ch == 'N')
                break;
            continue;
        }
        if (qian != NULL && first != NULL)
        {
            temp->next = qian->next;
            qian->next = temp;
        } else
        {
            temp->next = flag;
            first = temp;
        }
        printf("Continue?(Y/N)");
        char ch;
        ch = getchar();
        if (ch == 'N' || ch == 'n')
            break;
    }

    return first;
};

void showMenu()
{
    printf("---------------------\n");
    printf("|                   |\n");
    printf("|a---------Add users|\n");
    printf("|b-------Print users|\n");
    printf("|c------Change users|\n");
    printf("|d------Delete users|\n");
    printf("|f------Save in file|\n");
    printf("|h--------------Find|\n");
    printf("|i---------Find in s|\n");
    printf("|r------Read in file|\n");
    printf("|q--------------Exit|\n");
    printf("|                   |\n");
    printf("---------------------\n");
}

void printUsers(list *p)
{
    printf("  Name Phone number\n");
    for (; p; p = p->next)
        printf("%s  %s\n", p->name, p->number);
}

list *changeUsers(list *p)
{
    char name[8];
    printf("Input need change name:");
    while (1)
    {
        scanf("%s", name);
        list *flag = p;
        for (; flag && strcmp(flag->name, name) != 0; flag = flag->next);
        getchar();
        if (flag != NULL)
        {
            printf("Input number:");
            scanf("%s", flag->number);
            puts("Change success!");
            break;
        }
        printf("Not find,are you want continue?(Y/N)");
        char ch;
        ch = getchar();
        if (ch == 'N' || ch == 'n')
            break;
        printf("Input need change name:");
        getchar();
    }
    return p;
}

list *delUsers(list *p)
{
    char name[8];
    printf("Input need change name:");
    while (1)
    {
        scanf("%s", name);
        list *flag = p;
        list *qian = NULL;
        for (; flag && strcmp(flag->name, name) != 0; qian = flag, flag = flag->next);
        getchar();
        if (flag != NULL && qian != NULL)
        {
            list *fre = flag;
            qian->next = flag->next;
            free(fre);
            puts("Delete success!");
            break;
        } else if (qian == NULL)
        {
            list *fre = flag;
            p = flag->next;
            free(fre);
            puts("Delete success!");
            break;
        }
        printf("Not find,are you want continue?(Y/N)");
        char ch;
        ch = getchar();
        if (ch == 'N' || ch == 'n')
            break;
        printf("Input need change name:");
        getchar();
    }
    return p;
}

void *saveFile(list *p)
{
    FILE *fp = fopen("D:\\temp\\txl\\i.txt", "w");
    for (; p; p = p->next)
        fprintf(fp, "%s  %s\n", p->name, p->number);
    puts("Success!");
    fclose(fp);
}

list *readFile(list *p)
{
    FILE *fp = fopen("D:\\temp\\txl\\i.txt", "r");
    if (fp == NULL)
        return NULL;
    p = malloc(sizeof(list));
    list *flag = p;
    list *temp;
    while ((fscanf(fp, "%s%s", flag->name, flag->number)) != EOF)
    {
        temp = flag;
        flag->next = malloc(sizeof(list));
        flag = flag->next;
    }
    temp->next = NULL;
    return p;
}

void find(list *p)
{
    printf("Input find name or number:");
    char name[12];
    scanf("%s", name);
    list *flag = p;
    for (; flag && (strcmp(flag->name, name) != 0&&strcmp(flag->number, name) != 0); flag = flag->next);
    if (flag == NULL)
        printf("Not find\n");
    else
        printf("name:%s   number:%s\n", flag->name,flag->number);
}

void findInS(list *p)
{
    printf("Input Initials:");
    getchar();
    int flag = 1;
    char ch= getchar();
    for (; p; p = p->next)
    {
        if (p->name[0] == ch)
        {
            printf("name:%s  number:%s\n", p->name, p->number);
            flag=0;
        }
    }
    if(flag)
        printf("Not find\n");
}

int main()
{
    char ch;
    list *p = NULL;
    p = readFile(p);
    do
    {
        showMenu();
        ch = getc(stdin);
        switch (ch)
        {
            case 'a':
                p = addUser(p);
                break;
            case 'b':
                printUsers(p);
                break;
            case 'c':
                p = changeUsers(p);
                break;
            case 'd':
                p = delUsers(p);
                break;
            case 'f':
                saveFile(p);
                break;
            case 'h':
                find(p);
                break;
            case 'i':
                findInS(p);
                break;
            case 'q':
                saveFile(p);
                break;
        }
        getchar();
    } while (ch != 'q');
    return 0;
}
