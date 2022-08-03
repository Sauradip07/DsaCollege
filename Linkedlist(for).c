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
struct node *creatLinkedlist(int n){
    int i = 0;
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *p = NULL;
    
    for(int i = 0;i < n;i++){
        temp = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&(temp->data));
        temp ->next = NULL;
        if(head == NULL){
            head = temp;
        }
        else{
            p = head;
            while(p->next != NULL){
                p =p->next;
            }
            p->next = temp;
        }
    }
    return head;
    
}
int main()
{
    int n = 0;
    struct node *HEAD = NULL;
    printf("\nHow many node :");
    scanf("%d",&n);
    HEAD = creatLinkedlist(n);
    dispalyList(HEAD);
    return 0;
}
