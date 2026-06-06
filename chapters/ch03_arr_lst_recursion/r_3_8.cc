// Give a fully generic implementation of the doubly linked list data structure
// of a Section of the book by using a templated class.
//
// ---PLAN---
//
// Individual Node of the doubly linked list
// It has:
// An element
// pointer to the next Node
// pointer to the previous Node
// and its internals should be available for the friend (overarching) class of
// the DoublyLinkedList
//
// Overarching Doubly Linked List
// It has public members:
// Constructor
// Destructor
// Method empty() to check if the list is empty or not
// Method getFront() to get the element from the front
// Method getBack() to get the element from the back
// Method pushFront() to insert a new element at the front
// Method pushBack() to insert a new element at the back
// Method removeFront() to remove the element at the front
// Method removeBack() to remove the element at the back
//
// Private members:
// pointer for the head (private)
// pointer for the trail/tail (private)
//
// Protected members:
// Method add() to insert a new element before a node "v"
// Method remove() to remove a node "v"

#include <stdexcept>

// Forward declaration of the doubly linked list
template <typename T>
class DoublyLinkedList;

// Template class for Node object
template <typename T>
class Node {
    T element;
    Node* next;
    Node* previous;
    friend class DoublyLinkedList<T>;
};

// Skeleton of the template class of Doubly Linked List
template <typename T>
class DoublyLinkedList {
   public:
    DoublyLinkedList<T>();          // Constructor
    ~DoublyLinkedList<T>();         // Destructor
    bool empty() const;             // Is list empty?
    const T& getFront() const;      // Get the element from the front
    const T& getBack() const;       // Get the element from the back
    void pushFront(const T& data);  // Insert a new element at the front
    void pushBack(const T& data);   // Insert a new element at the back
    void removeFront();             // Remove the element from the front
    void removeBack();              // Remove the element from the back

   private:
    Node<T>* head;   // Reference pointer to the head
    Node<T>* trail;  // Reference pointer to the tail

   protected:
    void add(Node<T>* v, const T& elem);  // Add a new element before the Node v
    void remove(Node<T>* v);              // Remove the Node v
};

// Implementation of methods for Doubly Linked List Template Class
template <typename T>
DoublyLinkedList<T>::DoublyLinkedList() {
    head = new Node<T>;
    trail = new Node<T>;
    head->previous = nullptr;
    head->next = trail;
    trail->previous = head;
    trail->next = nullptr;
}

template <typename T>
DoublyLinkedList<T>::~DoublyLinkedList() {
    while (!empty()) removeFront();
    delete head;
    delete trail;
}

template <typename T>
bool DoublyLinkedList<T>::empty() const {
    return (head->next == trail);
}

template <typename T>
const T& DoublyLinkedList<T>::getFront() const {
    if (!empty()) {
        return DoublyLinkedList<T>::head->next->element;
    }
    throw std::underflow_error("List is empty!");
}

template <typename T>
const T& DoublyLinkedList<T>::getBack() const {
    if (!empty()) {
        return DoublyLinkedList<T>::trail->previous->element;
    }
    throw std::underflow_error("List is empty!");
}

int main() { return 0; }
