//Singly Linked List
/*
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;

    Node* next;

    Node(int data){
        this-> data= data;
        this-> next= nullptr;
    }
};
int main(){
    Node* head= new Node(10);

    head->next = new Node(20);

    head->next->next= new Node(30);

    head->next->next->next= new Node(40);

    Node* temp= head;
    while(temp!= nullptr){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}*/


// Double linked list
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;

    Node* pre;

    Node* next;

    Node(int d){
         data= d;
         pre= nullptr;
         next= nullptr;
    }
};
int main(){
   Node* head= new Node(10);

   head->next= new Node(20);
   head->next->pre= head;

   head->next->next= new Node(30);
   head->next->next->pre= head->next;

   head->next->next->next= new Node(40);
   head->next->next->next->pre= head->next->next;


   Node* temp= head;
   while(temp!=nullptr){
    cout<<temp->data;
    if(temp->next!=nullptr){
        cout<<" <-> ";
    }
    temp = temp->next;
   }
   return 0;
}


