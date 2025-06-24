#pragma once
#include <iostream>
#include <string>
using namespace std;

class QueueException {
private:
    string Message;
public:
    QueueException(const string& Error) : Message(Error) {}
    string What() const {
        return Message;
    }
};
