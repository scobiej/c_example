#include <stdio.h>
#include <stdlib.h>

#include "list.h"

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

//display the list
void printList()
{
    struct node *ptr = head;

    printf("\n[head] =>");
    //start from the beginning
    while (ptr != NULL)
    {
        printf(" %d =>", ptr->data);
        ptr = ptr->next;
    }

    printf(" [null]\n");
}

//insert link at the first location
void insert(int data)
{
    //create a link
    struct node *link = (struct node *)malloc(sizeof(struct node));

    //link->key = key;
    link->data = data;

    //point it to old first node
    link->next = head;

    //point first to new first node
    head = link;
}
