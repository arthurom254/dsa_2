/* Stack In CPP */
#include <iostream>
using namespace std;
class Stack
{
private:
    int maxSize;
    int *stackArray;
    int top;

public:
    Stack(int size)
    {
        maxSize = size;
        stackArray = new int[maxSize];
        top = -1;
    }
    void push(int value)
    {
        if (top < maxSize - 1)
        {
            stackArray[++top] = value;
            cout << "Pushed: " << value << endl;
        }
        else
        {
            cout << "Stack is full. Cannot push " << value << endl;
        }
    }
    int pop()
    {
        if (top >= 0)
        {
            int value = stackArray[top--];
            cout << "Popped: " << value << endl;
            return value;
        }
        else
        {
            cout << "Stack is empty. Cannot pop." << endl;
            return -1;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return stackArray[top];
        }
        else
        {
            cout << "Stack is empty. Cannot peek." << endl;
            return -1;
        }
    }
    ~Stack()
    {
        delete[] stackArray;
    }
};
int main()
{
    Stack stack(5);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout << "Top element: " << stack.peek() << endl;
    stack.pop();
    cout << "Top element after pop: " << stack.peek() << endl;
    stack.pop();
    stack.pop();
    stack.pop();
    return 0;
}