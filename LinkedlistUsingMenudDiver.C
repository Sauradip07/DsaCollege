#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void dispalyList(struct node *head){
    struct node *temp = head;
    while(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next; 
    }
    printf("NULL");
}
int creatLinkedlist(struct node *newnode){
    int ch;
    printf("\nEnter data");
    scanf("%d",&(newnode->data));
    printf("\nDo you enter more node continue(1/0):");
    scanf("%d",&ch);
    if(ch){
        newnode->next = (struct node*)malloc(sizeof(struct node));
        creatLinkedlist(newnode->next);
    }
    else{
        newnode->next = 0;
    }
    return 0;
}
int main()
{
    struct node *HEAD = (struct node*)malloc(sizeof(struct node));
    creatLinkedlist(HEAD);
    dispalyList(HEAD);
    return 0;
}
