/* Circular Linked List CPP */
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
        this->next = nullptr;
    }
    void printLinkedList(Node *head)
    {
        if (head == nullptr)
            return;
        Node *current = head;
        do
        {
            cout << current->data << endl;
            current = current->next;
        } while (current != head);
    }
};
int main()
{
    Node *head = new Node(6);
    Node *second = new Node(9);
    Node *third = new Node(7);
    head->next = second;
    second->next = third;
    third->next = head;
    head->printLinkedList(head);
    return 0;
}