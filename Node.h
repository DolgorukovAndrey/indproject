#pragma once
#include <iostream>
using namespace std;
class Node {
private:
	Node* Next;
	int Number;
public:
	Node(int Num) : Number(Num), Next(NULL) {}
	int GetNumber();
	int& GetNumberLink();
	Node* GetNext();
	Node*& GetNextLink();
};

