// Add a function size() to our C++ implementation of a singly link list. Can
// you design this function so that it runs in O(1) time?

#include <iostream>

template <typename E>
class SLinkedList;   // forward declaration

// ---------------- Node ----------------
template <typename E>
class SNode {
private:
    E elem;
    SNode<E>* next;
    friend class SLinkedList<E>;
};

// ---------------- List ----------------
template <typename E>
class SLinkedList {
public:
    SLinkedList();
    ~SLinkedList();

    bool empty() const;
    int size() const;
    const E& front() const;

    void addFront(const E& e);
    void removeFront();

private:
    SNode<E>* head;
    int n;                 // number of elements
};

// ---------------- Implementation ----------------

template <typename E>
SLinkedList<E>::SLinkedList()
    : head(nullptr), n(0) {}

template <typename E>
SLinkedList<E>::~SLinkedList() {
    while (!empty())
        removeFront();
}

template <typename E>
bool SLinkedList<E>::empty() const {
    return n == 0;
}

template <typename E>
int SLinkedList<E>::size() const {
    return n;
}

template <typename E>
const E& SLinkedList<E>::front() const {
    return head->elem;
}

template <typename E>
void SLinkedList<E>::addFront(const E& e) {
    SNode<E>* v = new SNode<E>;
    v->elem = e;
    v->next = head;
    head = v;
    ++n;
}

template <typename E>
void SLinkedList<E>::removeFront() {
    if (empty()) return;

    SNode<E>* old = head;
    head = old->next;
    delete old;
    --n;
}

// ---------------- Example usage ----------------
int main() {
    SLinkedList<int> list;

    list.addFront(10);
    list.addFront(20);
    list.addFront(30);

    std::cout << "Size: " << list.size() << std::endl;
    std::cout << "Front: " << list.front() << std::endl;

    list.removeFront();
    std::cout << "Size after removal: " << list.size() << std::endl;

    return 0;
}
