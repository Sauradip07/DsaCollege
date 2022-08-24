#include <stdio.h>
#include <stdlib.h>
struct node{
   int data;
   struct node *next;
};
struct node *addToempty(int data){
    struct node *temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->next = temp;
    return temp;
}
struct node *addToBeg(struct node *tail,int data){
    struct node *newp = malloc(sizeof(struct node));
    newp->data = data;
    newp->next = tail->next;
    tail->next = newp;
    return tail;
}
struct node *addToEnd(struct node *tail,int data){
    struct node *newp = malloc(sizeof(struct node));
    newp->data = data;
    newp->next = NULL;
    
    newp->next = tail->next;
    tail->next = newp;
    tail = tail->next;
    return tail;
}
struct node *addAfterPos(struct node *tail,int data,int pos){
    struct node *p = tail->next;
    struct node *newp = malloc(sizeof(struct node));
    newp->data = data;
    newp->next = NULL;
    while(pos > 1){
        p = p->next;
        pos--;
    }
    newp->next = p->next;
    p->next = newp;
    if(p == tail){
        tail = tail->next;
    }
    return tail;
}
void print(struct node *tail){
    struct node *p = tail->next;
    do{
        printf("%d->",p->data);
        p = p->next;
    }
    while(p != tail->next);
    printf("NULL");
}
int main()
{
    struct node *tail;
    tail = addToempty(45);
    tail = addToEnd(tail,5);
    tail = addToEnd(tail,15);
    tail = addToEnd(tail,55);
    tail = addToBeg(tail,7);
    print(tail);
    printf("\n");
    tail = addAfterPos(tail,10,3);
    print(tail);
    return 0;
}
