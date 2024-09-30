/* LINKED LIST IN CPP */
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
        while (head != nullptr)
        {
            cout << head->data << endl;
            head = head->next;
        }
    }
};
int main()
{
    Node *head = new Node(6);
    head->next = new Node(9);
    head->next->next = new Node(7);
    head->printLinkedList(head);
    return 0;
}