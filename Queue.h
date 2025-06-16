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
	void FrontFunction();
	void PushFunction(int Number);
	void SizeFunction();
	bool IsEmpty() const;
	void PopFunction();
	void ClearFunction();
};

