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

void MenuDrivenProgram();
void Insertappend();
void InsertBeg();
void InsertNThposition();
void DeleteBeg();
void DeleteEnd();
void DeleteNthPosition();
int Count();
void display();

struct node
{
    int data;
    struct node *link;
};

struct node *root = NULL;

int main()
{
    MenuDrivenProgram();

    return 0;
}

void Insertappend()
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
    printf("\nData inserted sucessfully\n");
}

void InsertBeg()
{
    struct node *temp;
    int n;
    temp = (struct node *)malloc(sizeof(struct node));
    printf("\nEnter data to be inserted :\n");
    scanf("%d", &n);
    temp->data = n;
    temp->link = NULL;

    if (root == NULL)
    {
        root = temp;
    }
    else
    {
        temp->link = root;
        root = temp;
    }
}

int Count()
{
    struct node *p;
    int count = 0;

    if (root == NULL)
    {
        printf("\nList is empty.\n");
        MenuDrivenProgram();
    }

    p = root;
    while (p != NULL)
    {
        count++;
        p = p->link;
    }
    printf("\nNumber of elements in the list: %d\n", count);
    return count;
}

void InsertNThposition()
{
    int position;
    printf("\nEnter the Position Number Where you want to insert:\n");
    scanf("%d", &position);

    if (position > 0)
    {
        struct node *temp, *p;
        int n;

        temp = (struct node *)malloc(sizeof(struct node));

        printf("\nEnter data to be inserted:\n");
        scanf("%d", &n);

        temp->data = n;
        temp->link = NULL;

        if (position == 1)
        {
            temp->link = root;
            root = temp;
            printf("\nData inserted successfully at position %d\n", position);
        }
        else
        {
            p = root;

            for (int i = 1; (i < position - 1 && p != NULL); i++)
            {
                p = p->link;
            }

            if (p != NULL)
            {
                temp->link = p->link;
                p->link = temp;
                printf("\nData inserted successfully at position %d\n", position);
            }
            else
            {
                printf("\nInvalid position. Insertion failed.\n");
            }
        }
    }
    else
    {
        printf("\nInvalid position. Insertion failed.\n");
    }
}

void DeleteBeg()
{
}
void DeleteEnd()
{
}
void DeleteNthPosition()
{
}

void display()
{
    struct node *p;
    p = root;
    if (root == NULL)
    {
        printf("\nEmpty List.\n");
    }
    else
    {
        printf("\nElements of the list are:\n");
        while (p != NULL)
        {
            printf("%d --> ", p->data);
            p = p->link;
        }
        printf("\n");
    }
}

void MenuDrivenProgram()
{
    int choice;
    while (1)
    {
        printf("\n\n\nPress 1 to at insert begining\nPress 2 at insert end (append)\nPress 3 to insert at n-th position\n");
        printf("Press 4 Delete from Bgenning\npress 5 Delete from end\npress 6 Delete From n th position\n");
        printf("Press 7 to display\nPress 8 to Count\nPress 9 to exit\n~ ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            InsertBeg();
            break;
        case 2:
            Insertappend();
            break;
        case 3:
            InsertNThposition();
            break;
        case 4:
            DeleteBeg();
            break;
        case 5:
            DeleteEnd();
            break;
        case 6:
            DeleteNthPosition();
            break;
        case 7:
            display();
            break;
        case 8:
            Count();
            break;
        case 9:
            exit(0);
        default:
            exit(0);
        }
    }
}