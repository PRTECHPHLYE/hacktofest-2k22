class DeleteMid {  
  
    //Represent a node of the doubly linked list  
  
    class Node{  
        int data;  
        Node previous;  
        Node next;  
  
        public Node(int data) {  
            this.data = data;  
        }  
    }  
  
    public int size = 0;  
    //Represent the head and tail of the doubly linked list  
    Node head, tail = null;  
  
    //addNode() will add a node to the list  
    public void addNode(int data) {  
        //Create a new node  
        Node newNode = new Node(data);  
  
        //If list is empty  
        if(head == null) {  
            //Both head and tail will point to newNode  
            head = tail = newNode;  
            //head's previous will point to null  
            head.previous = null;  
            //tail's next will point to null, as it is the last node of the list  
            tail.next = null;  
        }  
        else {  
            //newNode will be added after tail such that tail's next will point to newNode  
            tail.next = newNode;  
            //newNode's previous will point to tail  
            newNode.previous = tail;  
            //newNode will become new tail  
            tail = newNode;  
            //As it is last node, tail's next will point to null  
            tail.next = null;  
        }  
        //Size will count the number of nodes present in the list  
        size++;  
    }  
  
    //deleteFromMid() will delete a node from middle of the list  
    public void deleteFromMid() {  
        //Checks whether list is empty  
        if(head == null) {  
            return;  
        }  
        else {  
            //current will point to head  
            Node current = head;  
  
            //Store the mid position of the list  
            int mid = (size % 2 == 0) ? (size/2) : ((size+1)/2);  
  
            //Iterate through list till current points to mid position  
            for(int i = 1; i < mid; i++){  
                current = current.next;  
            }  
  
            //If middle node is head of the list  
            if(current == head) {  
                head = current.next;  
            }  
            //If middle node is tail of the list  
            else if(current == tail) {  
                tail = tail.previous;  
            }  
            else {  
                current.previous.next = current.next;  
                current.next.previous = current.previous;  
            }  
            //Delete the middle node  
            current = null;  
        }  
        size--;  
    }  
  
    //display() will print out the nodes of the list  
    public void display() {  
        //Node current will point to head  
        Node current = head;  
        if(head == null) {  
            System.out.println("List is empty");  
            return;  
        }  
        while(current != null) {  
            //Prints each node by incrementing the pointer.  
  
            System.out.print(current.data + " ");  
            current = current.next;  
        }  
        System.out.println();  
    }  
  
    public static void main(String[] args) {  
  
        DeleteMid dList = new DeleteMid();  
        //Add nodes to the list  
        dList.addNode(1);  
        dList.addNode(2);  
        dList.addNode(3);  
        dList.addNode(4);  
        dList.addNode(5);  
  
        //Printing original list  
        System.out.println("Original List: ");  
        dList.display();  
        while(dList.head != null) {  
            dList.deleteFromMid();  
            //Printing updated list  
            System.out.println("Updated List: ");  
            dList.display();  
        }  
    }  
}  
