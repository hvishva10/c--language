#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head = NULL;
void insert_end(int val)
{
    struct node *temp = malloc(sizeof(struct node));
    struct node *ptr = head;
    temp->data = val;
    if (head == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        head = temp;
    }
    else
    {
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        ptr->next = head;
        temp->prev = ptr;
        ptr->next = temp;
        head->prev = temp;
    }
}
void delete_end()
{
    struct node *ptr = head;
    struct node *p;
    if (ptr->next == head)
    {
        head = NULL;
        free(ptr);
        return;
    }
    while (ptr->next != head)
    {
        p = ptr;
        ptr = ptr->next;
    }
    p->next = head;
    head->prev = p;
    free(ptr);
    return;
}
void insert_first(int val)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    if(head == NULL)
    {
        temp->next = temp;
        temp->prev = temp;
        head = temp;
    }
    else
    {
        while (ptr->next != head)
        {
            ptr = ptr->next;
        }
        temp->next = head;
        temp->prev = ptr;
        head->prev = temp;
        ptr->next = temp;
        head = temp;
    }
}
void delete_first()
{
    if (head == NULL)
    {
        printf("List is allready empty...\n");
        return;
    }
    struct node *p = head;
    struct node *ptr = head;
    while (ptr->next != head)
    {
        ptr = ptr->next;
    }
    if (ptr == head)
    {
        head = NULL;
    }
    else
    {
        head = head->next;
        head->prev = ptr;
        ptr->next = head;
    }
    free(p);
}
void mid_insert(int val,int pos)
{
    struct node *ptr = head;
    struct node *temp = malloc(sizeof(struct node));
    temp->data = val;
    temp->next = NULL;
    temp->prev = NULL;
    while(ptr->data != pos)
    {
        ptr = ptr->next;
        if(ptr == head)
        {
            printf("position not found: ");
            free(temp);
            return;
        }
    }
    temp->next = ptr->next;
    ptr->prev = ptr;
    ptr->next->prev = temp;
    ptr->next = temp;
    return;
}
void mid_delete(int pos)
{
    struct node *ptr = head;
    struct node *temp =malloc(sizeof(struct node));
    struct node *p;
    while(ptr->data != pos)
    {
        p = ptr;
        ptr = ptr->next;
        if(ptr == head)
        {
            printf("position not found at list: ");
            return;
        }
    }
    p->next = ptr->next;
    ptr->next->prev = p;
    free(ptr);
    return;
}
void display()
{
    struct node *ptr = head;

    if (head == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    do
    {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
    printf("\n");
}
int main()
{
    int choice;
    int value, pos;
    while (1)
    {
        printf("\n1. Insert ");
        printf("\n2. display ");
        printf("\n3. Delete end");
        printf("\n4. Insert first");
        printf("\n5. delete first");
        printf("\n6. mid insert");
        printf("\n7. mid delete");
        printf("\n8. Exit");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter a value to insert: ");
            scanf("%d", &value);
            insert_end(value);
            break;

        case 2:
            delete_end();
            break;

        case 3:
            printf("Enter a value to insert: ");
            scanf("%d", &value);
            insert_first(value);
            break;

        case 4:
            delete_first();
            break;

        case 5:
            printf("Enter a value to insert : ");
            scanf("%d",&value);
            printf("enter a position : ");
            scanf("%d",&pos);
            mid_insert(value,pos);
            break;

        case 6:
            printf("enter a position : ");
            scanf("%d",&pos);
            mid_delete(pos);
            break;

        case 7:
            display();
            break;

        case 8:
            exit(0);

        default:
            printf("Invalid choice\n");
        }
    }
}