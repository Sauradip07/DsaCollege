#include <iostream>
using namespace std;
class Node
{
public:
	int data;
	Node *next;
	Node(int data)
	{
		this->data = data;
		this->next = NULL;
	}
};




Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}

void print(Node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}
Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
    //Write your code here
    Node **h =new Node*;
    Node **h1 = new Node*;
    *h = NULL;
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    while(head1 != NULL && head2 != NULL){
        if(head1 -> data <= head2-> data ){
            if(*h==NULL){
                *h = head1;
                *h1 = *h;
            }else{
                (*h1)->next =head1;
                *h1 =(*h1)->next;
            }
            head1 = head1->next;
        }
        else{
            if(*h == NULL){
                *h = head2;
                *h1 = *h;
            }
            else{
                (*h1)->next= head2;
                // head2 = head2->next;
                *h1 = (*h1)->next;
            }
            head2 = head2->next;
        }
        
    }
    if(head1 != NULL){
        (*h1)->next = head1;
    }
    if(head2 != NULL){
		(*h1)->next = head2;
    }
    return *h;
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		Node *head1 = takeinput();
		Node *head2 = takeinput();
		Node *head3 = mergeTwoSortedLinkedLists(head1, head2);
		print(head3);
	}
	return 0;
}
