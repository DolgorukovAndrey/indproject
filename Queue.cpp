#include "Queue.h"
void Queue::FrontFunction() {
    if (IsEmpty()) {
        cout << "error (Пустая очередь)" << endl;
        return;
    }
    else {
        cout << Head->GetNumber() << endl;
    }
}

void Queue::SizeFunction() {
    int Result = 0;
    if (IsEmpty()) {
        cout << 0 << endl;
        return;
    }
    else {
        Node* Current = Head;
        while (Current) {
            Current = Current->GetNext();
            Result++;
        }
        cout << Result << endl;
    }
}

bool Queue::IsEmpty() const {
    return Head == NULL;
}

void Queue::PushFunction(int Number) {
    Node* NewNode = new Node(Number);
    if (IsEmpty()) {
        Head = NewNode;
        Tail = NewNode;
    }
    else {
        Tail->GetNextLink() = NewNode;
        Tail = NewNode;
    }
    cout << "ok" << endl;
}

void Queue::PopFunction() {
    int Number;
    if (IsEmpty()) {
        cout << "error (Пустая очередь)" << endl;
        return;
    }
    else {
        Node* Temp = Head;
        Number = Temp->GetNumber();
        Head = Head->GetNext();
        delete Temp;
        cout << Number << endl;
    }
}

void Queue::ClearFunction() {
    if (!IsEmpty()) {
        while (Head) {
            Node* Temp = Head;
            Head = Head->GetNext();
            delete Temp;
        }
    }
    cout << "ok" << endl;
}
