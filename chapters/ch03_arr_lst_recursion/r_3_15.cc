// Give a fully generic implementation of the circularly
// linked list data structure by using a templated class.

#include <cassert>
#include <iostream>

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
    return cursor->next->element;
}

template <typename T>
const T& CircleList<T>::back() const {
    return cursor->element;
}

template <typename T>
void CircleList<T>::advance() {
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
    Node<T>* old = cursor->next;
    if (old == cursor) {
        cursor = nullptr;
    } else {
        cursor->next = old->next;
    }
    delete old;
}

int main() {
    CircleList<int> list;

    // Test initially empty
    assert(list.empty() == true);

    // Test adding first element
    list.add(10);
    assert(list.empty() == false);
    assert(list.front() == 10);
    assert(list.back() == 10);

    // Test adding another element (adds after cursor, so becomes front)
    list.add(20);
    assert(list.front() == 20);
    assert(list.back() == 10);

    // Test advance
    list.advance();  // cursor moves to 20. Back becomes 20, front becomes 10
    assert(list.front() == 10);
    assert(list.back() == 20);

    // Add another element
    list.add(30);  // added after cursor (20). Front becomes 30.
    assert(list.front() == 30);
    assert(list.back() == 20);

    // Test remove (removes front element, which is 30)
    list.remove();
    assert(list.front() == 10);
    assert(list.back() == 20);

    // Remove remaining elements
    list.remove();
    assert(list.front() == 20);
    assert(list.back() == 20);

    list.remove();
    assert(list.empty() == true);

    std::cout << "All tests passed successfully!\n";

    return 0;
}
