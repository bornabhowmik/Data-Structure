#include<stdio.h>
#include<stdlib.h>
struct node
{
    int value;
    struct node *next;
};
void printLinkedList(struct node *x){
    while(x!=NULL)
    {
        printf("%d ", x->value);
        x = x->next;
    }
    
}


int main()
{
    struct node* head;

    struct node* newnode;
    struct node* second;
    struct node* third;

    newnode = malloc(sizeof(struct node));
    second = malloc(sizeof(struct node));
    third = malloc(sizeof(struct node));

    newnode->value=5;
    newnode->next= second;

    second->value=7;
    second->next=third;

    third->value=9;
    third->next=NULL;

    head = newnode;

    printLinkedList(head);

}



