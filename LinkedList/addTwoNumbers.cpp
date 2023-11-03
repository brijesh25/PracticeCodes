#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(){
            data = 0;
            next = NULL;
        }

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

    //Insert Elements of first number
    insertAtLast(head, 1);
    insertAtLast(head, 2);
    insertAtLast(head, 3);
    //insertAtLast(head, 4);
    display(head);

    node* head1 = NULL;
    //Insert Elements of second number
    insertAtLast(head1, 5);
    insertAtLast(head1, 6);
    insertAtLast(head1, 7);
    //insertAtLast(head1, 8);
    display(head1);

    node* dummy = new node();
    node* temp = dummy;
    int carry = 0;

    while(head != NULL || head1 != NULL || carry){
        int sum = 0;

        if(head != NULL){
            sum += head->data;
            head = head->next;
        }

        if(head1 != NULL){
            sum += head1->data;
            head1 = head1->next;
        }

        sum += carry;
        carry = sum/10;

        node* newnode = new node(sum%10);

        temp->next = newnode;
        temp = temp->next;
    }

    display(dummy->next);

    return 0;
}