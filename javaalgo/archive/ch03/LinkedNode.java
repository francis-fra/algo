package ch03;

public class LinkedNode<T> {
    private T item;
    private LinkedNode<T> next;

    // constructor
    public LinkedNode(T value) {
        item = value;
        next = null;
    }
    public T get() { return item; }
    public void set(T value) { item = value; }
    public LinkedNode<T> next_node() { return next; }
    public void set_next_node(LinkedNode<T> node) { this.next = node; }

    public static void main(String[] argv) {
        LinkedNode<Integer> head = new LinkedNode<Integer>(5);
        PrintNode<Integer> P = new PrintNode<Integer>();
        P.execute(head);

    }

}