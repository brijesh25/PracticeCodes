#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }
};

void insertNode(node* &head, int val){
    node* newnode = new node(val);

    if(head == NULL){
        head = newnode;
        return;
    }

    node* temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newnode;
}

node* reverseLL(node* head){
    node* prev = NULL;
    node* curr = head;
    node* nextptr;

    while(curr != NULL){
        nextptr = curr->next;
        curr->next = prev;
        
        prev = curr;
        curr = nextptr;
    }
    return prev;
}

void display(node* head){
    while(head != NULL){
        cout<<head->data<<"->";
        head = head->next;
    }
    cout<<"NULL\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    node* head = NULL;

    insertNode(head, 10);
    insertNode(head, 20);
    insertNode(head, 30);
    insertNode(head, 40);
    insertNode(head, 50);
    display(head);

    //Reversing Linked List

    node* revHead = reverseLL(head);

    display(revHead);

    return 0;
}