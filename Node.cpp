#include "Node.h"
int Node::GetNumber() {
	return Number;
}
int& Node::GetNumberLink() {
	return Number;
}
Node* Node::GetNext() {
	return Next;
}
Node*& Node::GetNextLink() {
	return Next;
}