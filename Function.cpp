#include "Function.h"
#include <iostream>
#include <string>
#include "QueueException.h"
#include "Queue.h"
using namespace std;
void Push(Queue& Queue) {
	int Number;
	cin >> Number;
	if (Number) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "Вы хотите добавить " << Number << "? (Да - y, Нет - n): ";
		string Answer;
		try {
			cin >> Answer;
			if (Answer == "y") {
				Queue.PushFunction(Number);
			}
			if (Answer != "y" && Answer != "n") {
				throw QueueException("error (Неверный выбор, команда не выполнена)");
			}
		}
		catch (const QueueException& Exception) {
			cerr << Exception.What() << endl;
		}
	}
	else {
		cout << "error (Неверно указано число)";
		cin.clear();
		cout << endl;
	}
}
void Pop(Queue& Queue) {
	Queue.PopFunction();
}
void Front(Queue& Queue) {
	Queue.FrontFunction();
}
void Size(Queue& Queue) {
	Queue.SizeFunction();
}
void Clear(Queue& Queue) {
	Queue.ClearFunction();
}
