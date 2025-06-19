#pragma once
#include "Node.h"
#include <iostream>
using namespace std;
class Queue {
private:
	Node* Head;
	Node* Tail;
public:
	Queue() : Head(NULL), Tail(NULL) {}
	~Queue() {
		if (!IsEmpty()) {
			while (Head) {
				Node* Temp = Head;
				Head = Head->GetNext();
				delete Temp;
			}
		}
	}
	void FrontFunction();
	void PushFunction(int Number);
	void SizeFunction();
	bool IsEmpty() const;
	void PopFunction();
	void ClearFunction();
};

