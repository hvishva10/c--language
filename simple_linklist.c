#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *head = NULL;
void insertend(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = NULL;
    if (head == NULL)
    {
        head = temp;
        return;
    }
    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }
    ptr->next = temp;
    return;
}
void deleteend()
{
    struct node *ptr = head;
    struct node *p;
    if (ptr->next == NULL)
    {
        head = NULL;
        free(ptr);
    }
    while (ptr != NULL)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = NULL;
    free(ptr);
    return;
}
void insert_first(int val)
{
    struct node *temp = malloc(sizeof(struct node));

    temp->data = val;
    temp->next = head;
    head = temp;
}
void delete_first()
{
    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }

    struct node *temp = head;
    head = head->next;
    free(temp);
}
void mid_insert(int val, int position)
{

    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    if (ptr->data != position)
    {
        ptr = ptr->next;
    }
    temp->next = ptr->next;
    ptr->next = temp;
}

void mid_delete(int position)
{

    struct node *ptr = head;
   
    struct node *p = NULL;
    

    

    if (ptr->data != position)
    {
        p = ptr;
        ptr = ptr->next;   
    }
    p->next = ptr->next;
    free(ptr);
}
void display()
{
    struct node *ptr = head;
    if (head == NULL)
    {
        printf("list is empty ....");
    }
    else
    {
        while (ptr != NULL)
        {
            printf("%d ", ptr->data);
            ptr = ptr->next;
        }
    }
    printf("\n");
}
int main()
{
    int choice, val, position;
    printf("\n1. Insert ");
    printf("\n2. display ");
    printf("\n3. Delete end");
    printf("\n4. Insert first");
    printf("\n5. delete first");
    printf("\n6. mid insert  ....");
    printf("\n7. mid delete  ....");
    printf("\n8. Exit");

    while (1)
    {
        printf("\nEnter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {

        case 1:
            printf("Enter your value:");
            scanf("%d", &val);
            insertend(val);
            break;

        case 2:
            display();
            break;

        case 3:
            deleteend();
            break;

        case 4:
            printf("enter your value :");
            scanf("%d", &val);
            insert_first(val);
            break;

        case 5:
            delete_first();
            break;

        case 6:
            printf("enter your value :");
            scanf("%d", &val);
            printf("enter your position :");
            scanf("%d", &position);

            mid_insert(val, position);
            break;
        case 7:

            printf("enter your position: ");
            scanf("%d", &position);
            mid_delete(position);
            break;

        case 8:

            printf("exit thos program ....");
            exit(0);

        default:
            printf("invalid option sorry .....");
        }
    }
}