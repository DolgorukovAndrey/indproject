#include <iostream>
#include <string>
#include "Node.h"
#include "Queue.h"
#include "Function.h"
#include "QueueException.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	Queue Queue1;
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
				Queue1.~Queue();
				break;
			}
			else if (Input == "push") {
				push(Queue1);
			}
			else if (Input == "pop") {
				pop(Queue1);
			}
			else if (Input == "front") {
				front(Queue1);
			}
			else if (Input == "size") {
				size(Queue1);
			}
			else if (Input == "clear") {
				clear(Queue1);
			}
			else {
				throw QueueException("error");
			}
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			Input.clear();
		}
		catch (const QueueException& Exception) {
			cerr << Exception.what() << endl;
		}
	}
}