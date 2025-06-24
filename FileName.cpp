#include <iostream>
#include <string>
#include "Node.h"
#include "Queue.h"
#include "Function.h"
#include "QueueException.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	Queue Queue;
	string Input;
	cout << "Для работы в программе доступны следующие команды: " << endl;
	cout << "1) push число - добавляет число в очередь" << endl;
	cout << "2) pop - удаляет элемент из очереди" << endl;
	cout << "3) front - выводит первый элемент очереди" << endl;
	cout << "4) size - выводит размер очереди" << endl;
	cout << "5) clear - удаляет все элементы из очереди" << endl;
	cout << "6) exit - выход из программы" << endl;
	while (true) {
		try {
			cout << "Введите команду: ";
			cin >> Input;
			if (Input == "exit") {
				cout << "bye";
				Queue.~Queue();
				break;
			}
			else if (Input == "push") {
				Push(Queue);
			}
			else if (Input == "pop") {
				Pop(Queue);
			}
			else if (Input == "front") {
				Front(Queue);
			}
			else if (Input == "size") {
				Size(Queue);
			}
			else if (Input == "clear") {
				Clear(Queue);
			}
			else {
				cin.clear();
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				throw QueueException("error (Неверная команда)");
			}
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			Input.clear();
		}
		catch (const QueueException& Exception) {
			cerr << Exception.What() << endl;
		}
	}
}