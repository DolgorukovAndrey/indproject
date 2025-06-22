#include "Function.h"
#include <iostream>
#include <string>
#include "QueueException.h"
#include "Queue.h"
using namespace std;
void push(Queue& Queue1) {
	int Number;
	cin >> Number;
	if (Number) {
		cout << "Вы хотите добавить " << Number << "? (Да - y, Нет - n): ";
		string Answer;
		try {
			cin >> Answer;
			if (Answer == "y") {
				Queue1.PushFunction(Number);
			}
			if (Answer != "y" && Answer != "n") {
				throw QueueException("error");
			}
		}
		catch (const QueueException& Exception) {
			cerr << Exception.what() << endl;
		}
	}
	else {
		cout << "error";
		cin.clear();
		cout << endl;
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
