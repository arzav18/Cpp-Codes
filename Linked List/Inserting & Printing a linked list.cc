#include<bits/stdc++.h>
using namespace std;

class node{

public:
    int data;
    node*next;     //the pointer will be pointing to the next node, so it's type will be node*


    node(int val)                      //creating a constructor called node to make the work easy.
    {
         data=val;
         next=NULL;

    }

};


void insertAtTail(node* &head,int val)            //creating a function to insert a new node, head is taken by reference since we need to modify our linked list.
    {
        node*n=new node(val);
        //to check if there is no node in linked list, we'll keep a check to see if head==null;
        if(head==NULL)
        {
            head=n;
            return;
        }
        //To traverse to the last node of the linked list, we need an iterator for traversal.
        node* temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;


    }


//To print our linked list
    void display(node*head)         //here we are taking head by value and not by reference because we are not modifying are linked list.
    {
        node*temp=head;
        while(temp!=NULL)
        {
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }


int main()
{
    node*head=NULL;
    insertAtTail(head,1);       //Inserting values
    insertAtTail(head,2);       //in our
    insertAtTail(head,3);       //Linked list
    display(head);
}
