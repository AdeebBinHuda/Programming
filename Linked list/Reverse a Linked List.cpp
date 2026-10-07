#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;
    Node(int new_data){
        data= new_data;
        next= nullptr;
    }
};
Node *reverseList(Node *head){
    if(head== nullptr || head->next== nullptr){
        return head;
    }

    Node* rest= reverseList(head->next);

    // Make the current head as last node of
    // remaining linked list
    head->next->next= head;

    head->next= NULL;

    return rest;

}

void PrintList(Node *node){
    while(node != nullptr){
        cout<<node->data;
        if(node->next)
            cout<<"->";
        node= node->next;

    }
}


int main(){
    Node* head= new Node(10);
    head->next= new Node(20);
    head->next->next= new Node(30);
    head->next->next->next= new Node(40);

    head = reverseList(head);

    PrintList(head);
return 0;
}
