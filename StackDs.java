/* Stack java */
class Stack {
    private int maxSize;
    private int[] stackArray;
    private int top;
    public Stack(int size) {
        this.maxSize = size;
        this.stackArray = new int[maxSize];
        this.top = -1;
    }
public void push(int value) {
    if (top < maxSize - 1) {
        stackArray[++top] = value;
        System.out.println("Pushed: " + value);
    } else {
        System.out.println("Stack is full. Cannot push " + value);
    }
 }
public int pop() {
    if (top >= 0) {
        int value = stackArray[top--];
        System.out.println("Popped: " + value);
        return value;
    } else {
        System.out.println("Stack is empty. Cannot pop.");
        return -1;
    }
 }

public int peek() {
    if (top >= 0) {
        return stackArray[top];
    } else {
        System.out.println("Stack is empty. Cannot peek.");
        return -1;
    }
    }
}
public class StackDriver {
    public static void main(String[] args) {
        Stack stack = new Stack(5);
        stack.push(10);
        stack.push(20);
        stack.push(30);
        System.out.println("Top element: " + stack.peek());
        stack.pop();
        System.out.println("Top element after pop: " + stack.peek());
        stack.pop();
        stack.pop();
        stack.pop();
    }
}