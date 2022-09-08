#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node *top = NULL;
int isEmpty(){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}
void push(int data){
    struct node *newnode;
    newnode = malloc(sizeof(newnode));
    if(newnode == NULL){
        printf("stack is overflow");
        exit(1);
    }
    newnode->data = data;
    newnode->link = NULL;
    
    newnode->link = top;
    top = newnode;
}
int pop(){
    struct node *temp;
    int val;
    if(isEmpty()){
        printf("stack is underflow");
        exit(1);
    }
    temp = top;
    val = temp->data;
    top = top->link;
    free(temp);
    temp = NULL;
    return val;
}
int peek(){
    if(isEmpty()){
        printf("stack is underflow");
        exit(1);
    }
    return top->data;
}
void print(){
    struct node * temp;
    temp = top;
    if(isEmpty()){
        printf("stack is underflow");
        exit(1);
    }
    printf("stack elements are : ");
    while(temp){
        printf("%d ",temp->data);
        temp = temp->link;
    }
    printf("\n");
}
int main() {
    int data;
    push(10);
    push(20);
    push(30);
    push(40);
    print();
    data = pop();
    data = pop();
    print();
    return 0;
}
