#include <iostream>
using namespace std;

class node
{
private:
    int data;
    node *next;

public:
    void insert(int data);
    void insert_between(int data, int value);
    void display();
};
node *head;

void node::insert(int data)
{
    node *newnode = new node();
    if (head == NULL)
    {
        newnode->data = data;
        newnode->next = head;
        head = newnode;
    }
    else
    {
        node *temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        newnode->data = data;
        newnode->next = NULL;
        temp->next = newnode;
    }

    
}

void node::insert_between(int data, int value)
    {
        node *newnode = new node();
        newnode->data = data;
        newnode->next = NULL;
        if (value == 1)
        {
            newnode->next = head;
            head = newnode;
        }
        else
        {
            node *temp2;
            temp2 = head;
            for (int i = 1; i < value - 1; i++)
            {
                temp2 = temp2->next;
            }
            newnode->next = temp2->next;
            temp2->next = newnode;
            
        }
    }



void node::display()
{
    node *temp;
    temp = head;

    while (temp->next != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
        if (temp->next == NULL)
        {
            cout << temp->data << "->NULL"<<endl;
        }
    }
}

int main()
{
    int n, i, num, position;
    node n1;
    cout << "How many numbers u want to insert :- ";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << "\nEnter the number :- ";
        cin >> num;
        n1.insert(num);
    }
    n1.display();
    cout << "Enter the position where u want to insert your element: ";
    cin >> position;
    cout << "\nEnter the number :- ";
    cin >> num;
    n1.insert_between(num, position);
    n1.display();
    return 0;
}