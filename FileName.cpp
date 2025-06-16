#include <iostream>
#include <string>
#include "Node.h"
#include "Queue.h"
#include "Function.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	Queue Queue1;
	string input;
	while (true) {
		cout << "¬ведите команду (push число/pop/front/size/clear/exit): ";
		cin >> input;
		if (input == "exit") {
			cout << "bye";
			break;
		}
		else if (input == "push") {
			push(Queue1);
		}
		else if (input == "pop") {
			pop(Queue1);
		}
		else if (input == "front") {
			front(Queue1);
		}
		else if (input == "size") {
			size(Queue1);
		}
		else if (input == "clear") {
			clear(Queue1);
		}
		else {
			cout << "error" << endl;
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
}