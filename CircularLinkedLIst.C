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
    struct node *tail = NULL;
    int ans;
    scanf("%d",&ans);
    while(ans != -1){
        if(tail == NULL){
            tail = addToempty(ans);
        }
        else{
            tail = addToEnd(tail,ans);
        }
        scanf("%d",&ans);
    }
    print(tail);
    printf("\n");
    return 0;
}
