#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void insertHead(Node *&head, int d)
{
    Node *temp = new Node(d);
    temp->next = head;
    head = temp;
}

void insertTail(Node *&head, int d)
{
    Node *temp = new Node(d);
    Node *iterator = head;
    while (iterator->next != NULL)
    {
        iterator = iterator->next;
    }
    iterator->next = temp;
}

void display(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " -> ";
        head = head->next;
    }
    cout << "NULL" << endl;
}

Node *reverse(Node *&head)
{
    Node *current = head;
    Node *prev = NULL;
    Node *nextptr;
    while (current != NULL)
    {
        nextptr = current->next;
        current->next = prev;
        prev = current;
        current = nextptr;
    }
    return prev;
}

int main()
{
    Node *n1 = new Node(20);
    Node *n2 = new Node(10);
    n1->next = n2;
    display(n1);
    insertHead(n1, 30);
    cout << "insert at head" << endl;
    display(n1);
    insertTail(n1, 100);
    cout << "insert at tail" << endl;
    display(n1);
    Node *head = reverse(n1);
    cout << "reverse" << endl;
    display(head);
    return 0;
}
