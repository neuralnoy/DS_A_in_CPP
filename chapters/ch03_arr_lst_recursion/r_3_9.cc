// Give a more robust implementation of the doubly linked list data
// structure, which throws an appropriate exception if an illegal
// operation is attempted.

#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

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
    DoublyLinkedList();             // Constructor
    ~DoublyLinkedList();            // Destructor
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

template <typename T>
void DoublyLinkedList<T>::add(Node<T>* v, const T& elem) {
    auto u = new Node<T>;
    Node<T>* w = v->previous;
    u->previous = w;
    w->next = u;
    v->previous = u;
    u->next = v;
    u->element = elem;
}

template <typename T>
void DoublyLinkedList<T>::remove(Node<T>* v) {
    Node<T>* u = v->previous;
    Node<T>* w = v->next;
    u->next = w;
    w->previous = u;
    delete v;
}

template <typename T>
void DoublyLinkedList<T>::pushFront(const T& data) {
    auto v = head->next;
    add(v, data);
}

template <typename T>
void DoublyLinkedList<T>::pushBack(const T& data) {
    auto v = trail;
    add(v, data);
}

template <typename T>
void DoublyLinkedList<T>::removeFront() {
    if (empty()) {
        throw std::underflow_error("The list is already empty");
    } else {
        remove(head->next);
    }
}

template <typename T>
void DoublyLinkedList<T>::removeBack() {
    if (empty()) {
        throw std::underflow_error("The list is already empty");
    } else {
        remove(trail->previous);
    }
}

// Helper function to print individual elements, including support for vectors
template <typename T>
void printElement(const T& val) {
    std::cout << val;
}

// Specialization for printing std::vector
template <typename T>
void printElement(const std::vector<T>& vec) {
    std::cout << "vector{";
    for (size_t i = 0; i < vec.size(); ++i) {
        std::cout << vec[i];
        if (i + 1 < vec.size()) std::cout << ", ";
    }
    std::cout << "}";
}

// Destructive printing helper to display and empty the list
template <typename T>
void printAndClear(DoublyLinkedList<T>& list) {
    std::cout << "[";
    while (!list.empty()) {
        printElement(list.getFront());
        list.removeFront();
        if (!list.empty()) {
            std::cout << " <-> ";
        }
    }
    std::cout << "]" << std::endl;
}

int main() {
    std::cout << "========================================\n";
    std::cout << "   DOUBLY LINKED LIST COMPREHENSIVE TESTS\n";
    std::cout << "========================================\n\n";

    // ---------------------------------------------------------
    // Test 1: Integer List
    // ---------------------------------------------------------
    std::cout << "--- TEST 1: Integer DoublyLinkedList ---\n";
    DoublyLinkedList<int> intList;
    std::cout << "Initial empty() check (expected 1): " << intList.empty() << "\n";

    std::cout << "Pushing back 10, 20, 30...\n";
    intList.pushBack(10);
    intList.pushBack(20);
    intList.pushBack(30);

    std::cout << "Pushing front 5, 2...\n";
    intList.pushFront(5);
    intList.pushFront(2);

    std::cout << "Current front element (expected 2): " << intList.getFront() << "\n";
    std::cout << "Current back element (expected 30): " << intList.getBack() << "\n";
    std::cout << "Empty check after pushes (expected 0): " << intList.empty() << "\n";

    std::cout << "Removing front element...\n";
    intList.removeFront();  // Removes 2
    std::cout << "New front element (expected 5): " << intList.getFront() << "\n";

    std::cout << "Removing back element...\n";
    intList.removeBack();  // Removes 30
    std::cout << "New back element (expected 20): " << intList.getBack() << "\n";

    std::cout << "Printing and clearing remaining elements: ";
    printAndClear(intList);  // Expected: [5 <-> 10 <-> 20]
    std::cout << "Empty check after clearing (expected 1): " << intList.empty() << "\n\n";

    // ---------------------------------------------------------
    // Test 2: Character List
    // ---------------------------------------------------------
    std::cout << "--- TEST 2: Character DoublyLinkedList ---\n";
    DoublyLinkedList<char> charList;
    charList.pushBack('B');
    charList.pushBack('C');
    charList.pushFront('A');
    std::cout << "Front (expected A): " << charList.getFront() << "\n";
    std::cout << "Back (expected C): " << charList.getBack() << "\n";
    std::cout << "Printing and clearing: ";
    printAndClear(charList);  // Expected: [A <-> B <-> C]
    std::cout << "\n";

    // ---------------------------------------------------------
    // Test 3: Double List
    // ---------------------------------------------------------
    std::cout << "--- TEST 3: Double DoublyLinkedList ---\n";
    DoublyLinkedList<double> doubleList;
    doubleList.pushBack(3.14);
    doubleList.pushBack(2.718);
    doubleList.pushFront(1.414);
    std::cout << "Front (expected 1.414): " << doubleList.getFront() << "\n";
    std::cout << "Back (expected 2.718): " << doubleList.getBack() << "\n";
    std::cout << "Printing and clearing: ";
    printAndClear(doubleList);  // Expected: [1.414 <-> 3.14 <-> 2.718]
    std::cout << "\n";

    // ---------------------------------------------------------
    // Test 4: String List
    // ---------------------------------------------------------
    std::cout << "--- TEST 4: String DoublyLinkedList ---\n";
    DoublyLinkedList<std::string> stringList;
    stringList.pushBack("World");
    stringList.pushFront("Hello");
    std::cout << "Front (expected Hello): " << stringList.getFront() << "\n";
    std::cout << "Back (expected World): " << stringList.getBack() << "\n";
    std::cout << "Printing and clearing: ";
    printAndClear(stringList);  // Expected: [Hello <-> World]
    std::cout << "\n";

    // ---------------------------------------------------------
    // Test 5: Container of Containers (std::vector<int>)
    // ---------------------------------------------------------
    std::cout << "--- TEST 5: Vector Container (DoublyLinkedList<std::vector<int>>) ---\n";
    DoublyLinkedList<std::vector<int>> vectorList;

    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {4, 5};
    std::vector<int> v3 = {6, 7, 8, 9};

    vectorList.pushBack(v2);
    vectorList.pushFront(v1);
    vectorList.pushBack(v3);

    std::cout << "Front element: ";
    printElement(vectorList.getFront());  // Expected: vector{1, 2, 3}
    std::cout << "\n";

    std::cout << "Back element: ";
    printElement(vectorList.getBack());  // Expected: vector{6, 7, 8, 9}
    std::cout << "\n";

    std::cout << "Printing and clearing: ";
    printAndClear(
        vectorList);  // Expected: [vector{1, 2, 3} <-> vector{4, 5} <-> vector{6, 7, 8, 9}]
    std::cout << "\n";

    // ---------------------------------------------------------
    // Test 6: Exception Handling (Empty List Safety)
    // ---------------------------------------------------------
    std::cout << "--- TEST 6: Exception / Safety Checks ---\n";
    DoublyLinkedList<int> emptyList;

    try {
        std::cout << "Attempting getFront() on empty list...\n";
        emptyList.getFront();
    } catch (const std::underflow_error& e) {
        std::cout << "Caught expected exception: " << e.what() << "\n";
    }

    try {
        std::cout << "Attempting removeBack() on empty list...\n";
        emptyList.removeBack();
    } catch (const std::underflow_error& e) {
        std::cout << "Caught expected exception: " << e.what() << "\n";
    }

    std::cout << "\nAll tests completed successfully!\n";
    return 0;
}
