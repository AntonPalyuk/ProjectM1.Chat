#include "Message.h"
#include <iostream>
using namespace std;

Message::Message(string from, string to, string message) :_from{ from }, _to{ to }, _message{ message }
{
	cout << "Message was constructed" << endl;
}
string Message::getFrom()
{
	return _from;
}

string Message::getTo()
{
	return _to;
}

string Message::getMessage()
{
	return _message;
}

bool Message::getSlotStatus()
{
	return _slotStatus;

}


void Message::setSlotStatusFalse()
{
	_slotStatus = false;

}

void Message::setFrom(string s)
{
	_from = s;
}

void Message::setTo(string s)
{
	_to = s;
}

void Message::setMessage(string s)
{
	_message = s;
}

void Message::MessageCout()
{
	cout << "From:  " << getFrom() << endl;
	cout << "To:  " << getTo() << endl;
	cout << "Message:  " << getMessage() << endl << endl;

}