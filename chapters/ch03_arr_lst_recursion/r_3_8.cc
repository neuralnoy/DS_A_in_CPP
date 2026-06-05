// Give a fully generic implementation of the doubly linked list data structure
// of a Section of the book by using a templated class.

// Forward declaration of the doubly linked list
template <typename T>
class DoublyLinkedList;

// Individual Node of the doubly linked list
// It has:
// An element
// pointer to the next Node
// pointer to the previous Node
// and its internals should be available for the friend (overarching) class of
// the DoublyLinkedList

template <typename T>
class Node {
    T element;
    Node* next;
    Node* previous;
    friend class DoublyLinkedList<T>;
};

// Overarching Doubly Linked List
// It has public members:
// Constructor
// Destructor
// Method empty() to check if the list is empty or not
// Method getFront() to get the Node from the front
// Method getBack() to get the Node from the back
// Method pushFront() to put new Node in the front
// Method pushBack() to put new Node in the back
// Method removeFront() to remove the Node from the front
// Method removeBack() to remove the Node from the back
//
// Private members:
// pointer for the head (private)
// pointer for the trail (private)
//
// Protected members:
// Method add() to insert new node before a node "v"
// Methode remove() to remove a node "v"

// Skeleton of the class
template <typename T>
class DoublyLinkedList {
   public:
    DoublyLinkedList<T>();          // Constructor
    ~DoublyLinkedList<T>();         // Destructor
    bool empty() const;             // Is list empty?
    const T& getFront();            // Get the Node from the front
    const T& getBack();             // Get the Node from the back
    void pushFront(const T& data);  // Put new Node in the front
    void pushBack(const T& data);   // Put new Node in the back
    void removeFront();             // Remove the Node from the front
    void removeBack();              // Remove the Node from the back

   private:
    Node<T>* head;   // Reference pointer to the head
    Node<T>* trail;  // Reference pointer to the tail

   protected:
    void add(Node<T>* v, const T& elem);  // Add a new Node element before the Node v
    void remove(Node<T>* v);              // Remove the Node v
};

// Implementation of methods for Doubly Linked List

int main() { return 0; }
