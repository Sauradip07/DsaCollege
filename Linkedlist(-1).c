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
struct node *creatLinkedlist(){
    int i = 0;
    struct node *head = NULL;
    struct node *temp = NULL;
    struct node *p = NULL;
    int ans;
    scanf("%d",&ans);
    while(ans != -1){
        temp = (struct node*)malloc(sizeof(struct node));
        temp->data = ans;
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
        scanf("%d",&ans);
    }
    return head;
    
}
int main()
{
    struct node *HEAD = NULL;
    HEAD = creatLinkedlist();
    dispalyList(HEAD);
    return 0;
}
