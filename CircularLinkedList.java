/* Circular Linked List in Java */
class CircularLinkedList {
    public static void main(String args[]) {
        Node head = new Node(6);
        Node second = new Node(9);
        Node third = new Node(7);
        head.next = second;
        second.next = third;
        third.next = head;
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
        if (head == null) return;
            Node current = head;
        do {
            System.out.println(current.data);
            current = current.next;
        } while (current != head);
    }
}