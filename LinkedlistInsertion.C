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
struct node *insertNode(struct node *head,int i,int data){
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = data;
    int count = 0;
    struct node *temp = head;
    if( i == 0){
        newnode->next = head;
        head = newnode;
        return head;
    }
    while(temp != NULL &&count < i-1){
        temp = temp->next;
        count++;
    }
    if(temp != NULL){
        struct node *a = temp->next;
        temp->next = newnode;
        newnode->next = a;
    }
    return head;
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
    return head;
    
}
int main()
{
    struct node *HEAD = NULL;
    HEAD = creatLinkedlist();
    dispalyList(HEAD);
    printf("\n");
    int i,data;
    scanf("%d",&i);
    scanf("%d",&data);
    HEAD = insertNode(HEAD,i,data);
    dispalyList(HEAD);
    return 0;
}
