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

void insertAtLast(node* &head, int val){
    node* temp = head;

    node* newnode = new node(val);

    if(head == NULL){
        head = newnode;
        return;
    }
        
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newnode;
}

void insertAtBeg(node* &head, int val){
    
    node* newnode = new node(val);

    if(head == NULL){
        head = newnode;
        return;
    }

    newnode->next = head;
    head = newnode;
}

void display(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    node* head = NULL;

    //Insert Elements at Last
    insertAtLast(head, 1);
    insertAtLast(head, 2);
    insertAtLast(head, 3);
    insertAtLast(head, 4);
    display(head);

    //Insert Elements at Beginning
    insertAtBeg(head, 5);
    insertAtBeg(head, 6);
    display(head);

    return 0;
}