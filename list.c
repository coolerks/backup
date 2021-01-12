/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-12-15 19:57:44
 * @LastEditTime: 2020-12-16 07:56:13
 */
/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-12-12 16:16:14
 * @LastEditTime: 2020-12-15 19:57:31
 */
#include<stdio.h>
#include<stdlib.h>

typedef struct
{
    int num;
    struct node *next;
} node;

node *create()
{
    node *head;
    node *flag;
    head = malloc(sizeof(node));
    flag = head;
    scanf("%d", &flag->num);
    while (flag->num)
    {
        flag->next = malloc(sizeof(node));
        flag = flag->next;
        scanf("%d", &flag->num);
    }
    flag->next = NULL;
    return head;
}

void printList(node *flag)
{
    while (flag->next)
    {
        printf("%d ", flag->num);
        flag = flag->next;
    }
}

void insertList(node *p) 
{
    node *head = malloc(sizeof(node));
    int weizhi;
    scanf("%d", &weizhi);
    printf("\ninput insert number:");
    scanf("%d", &head->num);
    node *flag = p;
    if (weizhi > 0)
    {
        while (weizhi > 1)
        {
            flag = flag->next;
            weizhi--;
        }
        head->next = flag->next;
        flag->next = head;
    } else
    {
        puts("zhixing");
        head->next = p;
        flag = head;
        p=flag;
    }
    //printList(p);
}

int main()
{
    node *p = create();
    printList(p);
    printf("\ninput insert weizhi:");
    insertList(p);
    printList(p);
    free(p);
    return 0;
}


/*
 * @Created by : SongXiaoxu
 * @Copyright © 2020年 by: 宋晓旭. All rights reserved
 * @Date: 2020-09-28 08:36:24
 * @LastEditTime: 2020-12-15 19:56:05
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct
{
    int a;
    struct node *next;
} node;

node *create()
{
    node *first = malloc(sizeof(node));
    node *flag = first;
    scanf("%d", &flag->a);
    while (flag->a)
    {
        flag->next = malloc(sizeof(node));
        flag = flag->next;
        scanf("%d", &flag->a);
    }
    flag->next = NULL;
    return first;
}

void printNode(node *p)
{
//    node *flag = p;
//    if (flag->next == NULL)
//    {
//        puts("p is empty");
//        return;
//    }
//    while (flag)
//    {
//        printf("%d ", flag->a);
//        flag = flag->next;
//    }
    for (node *flag = p; flag; flag = flag->next)
        printf("%d ", flag->a);
}

bool listIsEmpty(node *p)
{
    if (p == NULL)
        return true;
    else
    {
        return false;
    }
}

node *insert(int n, node *first)
{
    printf("input insert data:");
    node *newNode = malloc(sizeof(node));
    scanf("%d", &newNode->a);
    int isEnd = 0;
    if (n == 0)
    {
        newNode->next = first;
        return newNode;
    } else
    {
        node *flag = first;
        while (n > 1 && flag->next != NULL)
        {
            flag = flag->next;
            n--;
        }
        newNode->next = flag->next;
        flag->next = newNode;
        return first;
    }
}

int main()
{
    node *first;
    first = create();
    printf("create success\n");
    printf("before:");
    if (listIsEmpty(first))
        puts("node is empty");
    else
    {
        puts("node is not empty");
        printNode(first);
    }
    puts("");
    int n;
    scanf("%d", &n);
    first = insert(n, first);
    printf("after:");
    if (listIsEmpty(first))
        puts("node is empty");
    else
    {
        puts("node is not empty");
        printNode(first);
    }
    free(first);
    return 0;
}