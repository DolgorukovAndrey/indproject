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
	cout << "��� ������ � ��������� �������� ��������� �������: " << endl;
	cout << "1) push ����� - ��������� ����� � �������" << endl;
	cout << "2) pop - ������� ������� �� �������" << endl;
	cout << "3) front - ������� ������ ������� �������" << endl;
	cout << "4) size - ������� ������ �������" << endl;
	cout << "5) clear - ������� ��� �������� �� �������" << endl;
	cout << "6) exit - ����� �� ���������" << endl;
	while (true) {
		try {
			cout << "������� �������: ";
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
				throw QueueException("error (�������� �������)");
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