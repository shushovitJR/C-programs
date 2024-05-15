#include<stdio.h>
#include<stdlib.h>
int main(){
    struct node
    {
        int data;
        struct node *next;
    };
    struct node *head, *newnode, *temp;
    head = 0;
    int choice;
    do
    {
        newnode = (struct node*)malloc(sizeof(struct node));
        printf("Enter the number to insert\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if (head == 0){
            head=newnode;
            temp=newnode;
        }
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("1.Continue \t 0.Exit\n");
        scanf("%d",&choice);
    } while (choice);
    temp = head;
    printf("%p\n head");
    while(temp!=0)
    {
        printf("[%d | %p]\n",temp->data,temp->next);
        temp=temp->next;
    }
    return 0;
    
}
