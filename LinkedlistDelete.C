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
struct node *deleteNode(struct node *head, int pos){
    
    struct node *temp = head;
    if(head == NULL){
        return head;
    }
    if(pos == 0){
        struct node *a = head;
        head = head->next;
        //delete a;
        return head;
    }
    int count = 0;
    while(temp != NULL && count < pos - 1 && temp->next != NULL){
        count++;
        temp = temp->next;
    }
    if(temp != NULL && temp->next != NULL){
    	struct node *a = temp->next;
    	struct node *b = a->next;
    	temp->next = b;
        //delete a;
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
    HEAD = deleteNode(HEAD,i);
    dispalyList(HEAD);
    return 0;
}
