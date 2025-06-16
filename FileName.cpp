#include <iostream>
#include <string>
#include "Node.h"
#include "Queue.h"
#include "Function.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "Russian");
	Queue Queue1;
	string Input;
	while (true) {
		cout << "¬ведите команду (push число/pop/front/size/clear/exit): ";
		cin >> Input;
		if (Input == "exit") {
			cout << "bye";
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
			cout << "error" << endl;
		}
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		Input.clear();
	}
}