#include "../12.10/queue.h"
#include <cstdlib>

Queue::Queue(int gs)
    : qSize(gs) {
    front = rear = nullptr;
    items = 0;
}

Queue::~Queue() {
    Node* temp;
    while (front != nullptr) {
        temp = front;
        front = front->next;
        delete temp;
    }
}

bool Queue::isEmpty() const {
    return items == 0;
}

bool Queue::isFull() const{
    return items == qSize;
}

int Queue::queueCount() const{
    return items;
}

bool Queue::enqueue(const Item& item){
    if (isFull())
        return false;
    Node* add = new Node;
    add->item = item;
    add->next = nullptr;
    items++;
    if(front == nullptr)
        front = add;
    else    
        rear->next = add;
    rear = add;
    return true;
}

bool Queue::dequeue(Item& item){
    if(front == nullptr)
        return false;
    item = front->item;
    items--;
    Node* temp = front;
    front = front->next;
    delete temp;
    if(items == 0)
        rear = nullptr;
    return true;
}

void Customer::set(long when)
{
    processTime = std::rand() % 3 + 1;
    arrive = when;
}