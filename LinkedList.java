/* Linked List in Java */

class SingleLinkedList {
    public static void main(String args[]) {
        Node head = new Node(6);
        head.next = new Node(9);
        head.next.next = new Node(7);
        head.printLinkedList(head);
    }
}
class Node {
    int data;
    Node next;
    Node(int data) {
        this.data = data;
        this.next = null;
    }
    void printLinkedList(Node head) {
        while (head != null) {
            System.out.println(head.data);
            head = head.next;
        }
    }
}