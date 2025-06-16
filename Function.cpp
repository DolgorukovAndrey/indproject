#include "Function.h"
#include <iostream>
#include "Queue.h"
using namespace std;
void push(Queue& Queue1) {
	int Number;
	cin >> Number;
	if (!cin) {
		cout << "error";
	}
	else {
		Queue1.PushFunction(Number);
	}
}
void pop(Queue& Queue1) {
	Queue1.PopFunction();
}
void front(Queue& Queue1) {
	Queue1.FrontFunction();
}
void size(Queue& Queue1) {
	Queue1.SizeFunction();
}
void clear(Queue& Queue1) {
	Queue1.ClearFunction();
}