#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    string  data;
    Node* link;
    Node(string _data)
    {
        data = _data;
        link = NULL;
    }
};

class LinkList
{
    public:
    Node* head;
    LinkList()
    {
        head = NULL;
    }
    void print();
    void insert_node(string data);
};

void LinkList::insert_node(string data)
{
    Node* new_node = new Node(data);
    if (head==NULL)
    {
        head = new_node;
    }
    else{
        Node* next_node = new Node(data);
        Node* temp = head;
        while(temp->link!=NULL)
        {
            temp = temp->link;
        }
        temp->link = next_node;
    }
    
    
    
}

void LinkList::print()
{
    Node* temp1 = head;
    while(temp1->link!=NULL)
    {
        cout<<temp1->data<<" ";
        temp1 = temp1->link;
    }
    if (temp1->link == NULL)
    {
        cout<<temp1->data;
    }
}

int main()
{

    LinkList list1;
    list1.insert_node("A");
    list1.insert_node("B");
    list1.print();
    return 0;
}