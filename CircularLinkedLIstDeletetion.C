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
struct node *delFirst(struct node *tail){
    if(tail == NULL){
        return tail;
    }
    if(tail->next == tail){
        free(tail);
        tail = NULL;
        return tail;
    }
    struct node *temp = tail->next;
    tail->next = temp->next;
    free(temp);
    temp = NULL;
    return tail;
}
struct node *delLast(struct node *tail){
    if(tail == NULL){
        return tail;
    }
    struct node *temp = tail->next;
    if(tail->next == tail){
        free(tail);
        tail = NULL;
        return tail;
    }
    while(temp->next != tail){
        temp = temp->next;
    }
    temp->next = tail->next;
    free(tail);
    tail = temp;
    return tail;
}
struct node *delInter(struct node *tail,int pos){
    if(tail == NULL){
        return tail;
    }
    if(tail == NULL){
        return tail;
    }
    struct node *temp = tail->next;
    if(tail->next == tail){
        free(tail);
        tail = NULL;
        return tail;
    }
    if(tail->next == tail){
        free(tail);
        tail = NULL;
        return tail;
    }
    while(pos > 2){
        temp =temp->next;
        pos--;
    }
    struct node *temp2 = temp->next;
    temp->next = temp2->next;
    if(temp2 == tail){
        tail = temp;
    }
    free(temp2);
    temp2 = NULL;
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
    // tail = delFirst(tail);
    // tail = delLast(tail);
    tail = delInter(tail,3);
    print(tail);
    return 0;
}
