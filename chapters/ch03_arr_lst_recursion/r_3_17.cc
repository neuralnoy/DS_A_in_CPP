// Write a short C++ function to count the number of nodes in a circularly
// linked list.

#include <cassert>
#include <iostream>
#include <stdexcept>

template <typename T>
class CircleList;

template <typename T>
class Node {
   private:
    T element;
    Node<T>* next;

    friend class CircleList<T>;
};

template <typename T>
class CircleList {
    // public interface
   public:
    CircleList();            // Constructor
    ~CircleList();           // Destructor
    bool empty() const;      // Is list empty?
    const T& front() const;  // Get the front element
    const T& back() const;   // Get the back element
    void advance();          // Advance cursor
    void add(const T& e);    // Add after cursor
    void remove();           // remove node after cursor
    int countNumberNodes();  // counts the number of nodes

   private:
    Node<T>* cursor;  // The cursor
};

template <typename T>
CircleList<T>::CircleList() : cursor(nullptr) {}

template <typename T>
CircleList<T>::~CircleList() {
    while (!empty()) {
        remove();
    }
}

template <typename T>
bool CircleList<T>::empty() const {
    return cursor == nullptr;
}

template <typename T>
const T& CircleList<T>::front() const {
    if (empty()) {
        throw std::runtime_error("List is empty");
    }
    return cursor->next->element;
}

template <typename T>
const T& CircleList<T>::back() const {
    if (empty()) {
        throw std::runtime_error("List is empty");
    }
    return cursor->element;
}

template <typename T>
void CircleList<T>::advance() {
    if (empty()) {
        throw std::runtime_error("List is empty");
    }
    cursor = cursor->next;
}

template <typename T>
void CircleList<T>::add(const T& e) {
    Node<T>* v = new Node<T>;
    v->element = e;
    if (cursor == nullptr) {
        v->next = v;
        cursor = v;
    } else {
        v->next = cursor->next;
        cursor->next = v;
    }
}

template <typename T>
void CircleList<T>::remove() {
    if (empty()) {
        throw std::runtime_error("List is empty");
    }
    Node<T>* old = cursor->next;
    if (old == cursor) {
        cursor = nullptr;
    } else {
        cursor->next = old->next;
    }
    delete old;
}

template <typename T>
int CircleList<T>::countNumberNodes() {
    if (empty()) return 0;
    int counter = 1;
    Node<T>* curr = cursor->next;
    while (curr != cursor) {
        counter++;
        curr = curr->next;
    }
    return counter;
}

int main() {
    CircleList<int> list;

    // Test initially empty
    assert(list.empty() == true);
    assert(list.countNumberNodes() == 0);

    // Test adding first element
    list.add(10);
    assert(list.empty() == false);
    assert(list.front() == 10);
    assert(list.back() == 10);
    assert(list.countNumberNodes() == 1);

    // Test adding another element (adds after cursor, so becomes front)
    list.add(20);
    assert(list.front() == 20);
    assert(list.back() == 10);
    assert(list.countNumberNodes() == 2);

    // Test advance
    list.advance();  // cursor moves to 20. Back becomes 20, front becomes 10
    assert(list.front() == 10);
    assert(list.back() == 20);
    assert(list.countNumberNodes() == 2);

    // Add another element
    list.add(30);  // added after cursor (20). Front becomes 30.
    assert(list.front() == 30);
    assert(list.back() == 20);
    assert(list.countNumberNodes() == 3);

    // Test remove (removes front element, which is 30)
    list.remove();
    assert(list.front() == 10);
    assert(list.back() == 20);
    assert(list.countNumberNodes() == 2);

    // Remove remaining elements
    list.remove();
    assert(list.front() == 20);
    assert(list.back() == 20);
    assert(list.countNumberNodes() == 1);

    list.remove();
    assert(list.empty() == true);
    assert(list.countNumberNodes() == 0);

    // Test exceptions
    bool exception_thrown = false;
    try {
        list.front();
    } catch (const std::runtime_error& e) {
        exception_thrown = true;
    }
    assert(exception_thrown == true);

    exception_thrown = false;
    try {
        list.back();
    } catch (const std::runtime_error& e) {
        exception_thrown = true;
    }
    assert(exception_thrown == true);

    exception_thrown = false;
    try {
        list.advance();
    } catch (const std::runtime_error& e) {
        exception_thrown = true;
    }
    assert(exception_thrown == true);

    exception_thrown = false;
    try {
        list.remove();
    } catch (const std::runtime_error& e) {
        exception_thrown = true;
    }
    assert(exception_thrown == true);

    std::cout << "All tests passed successfully!\n";

    return 0;
}
