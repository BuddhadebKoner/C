/*
Write a menu driven C program to Perform the following operations on Linked List
1. Insert
    i. at begining
    ii. at end (append)
    iii. at n-th position

2. delete:
    i. from begining
    ii. from end
    iii. from n-th position

3. display
4. count
*/

#include <stdio.h>
#include <stdlib.h>

void append();
void display();

struct node
{
    int data;
    struct node *link;
};

struct node *root = NULL;

int main()
{
    int choice;
    while (1)
    {
        printf("\nPress 1 to append\nPress 2 to display\nPress 3 to exit\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            append();
            break;

        case 2:
            display();
            break;

        case 3:
            exit(0);
        }
    }
    return 0;
}

void append()
{
    int n;
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    printf("\nEnter the data to be inserted\n");
    scanf("%d", &n);

    temp->data = n;
    temp->link = NULL;

    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        struct node *p;
        p = root;

        // traversing from one node to next node
        while (p->link != NULL)
        {
            p = p->link;
        }
        p->link = temp;
    }
}

void display()
{
    struct node *p;
    p = root;
    if (root == NULL)
    {
        printf("Empty List.");
    }
    else
    {
        printf("\nElements of the list are:\n");
        while (p != NULL)
        {
            printf("%d ", p->data);
            p = p->link;
        }
    }
}