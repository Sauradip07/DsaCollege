#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node *next;
};
void dispalyList(struct node *head){
    struct node *temp = head;
    if(temp != NULL){
        printf("%d->",temp->data);
        temp = temp->next;
    }
    while(temp != head){
        printf("%d->",temp->data);
        temp = temp->next; 
    };
    printf("HEAD");
}
struct node *creatLinkedlist(){
    int i = 0;
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *p = NULL;
    struct node *tail = NULL;
    int ans;
    scanf("%d",&ans);
    while(ans != -1){
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = ans;
        temp ->next = NULL;
        if(head == NULL){
            head = temp;
            tail = temp;
        }
        else{
            
            tail->next = temp;
            tail = tail->next;
        }
        scanf("%d",&ans);
    }
    tail->next = head;
    return head;
    
}
int main()
{
    struct node *HEAD = NULL;
    HEAD = creatLinkedlist();
    dispalyList(HEAD);
    return 0;
}
