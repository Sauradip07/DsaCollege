#include <stdio.h>
#include <stdlib.h>
#define Max 5
int stack_arr[Max];
int top = -1;
int isFull(){
    if(top == Max-1){
        return 1;
    }
    else{
        return 0;
    }
}
int isEmpty(){
    if(top == -1){
        return 1;
    }
    else{
        return 0;
    }
}
void push(int data){
    if(isFull()){
        printf("Stack is overflow : ");
        return;
    }
    top = top + 1;
    stack_arr[top] = data;
}
int pop(){
    if(isEmpty()){
        printf("stack is underflow");
    }
    int value = stack_arr[top];
    top = top - 1;
    return value;
}
void print(){
    if(top == -1){
        printf("stack is empty");
    }
    for(int i = top;i >= 0;i--){
        printf("%d ",stack_arr[i]);
    }
}

int main() {
    int data;
    push(4);
    push(5);
    push(6);
    push(7);
    push(8);
    data = pop();
    print();
    return 0;
}
