#pragma once
#include <string>
using namespace std;

class Message
{
private:
	string _from;
	string _to;
	string _message;
	bool _slotStatus = true;

public:
	Message() = default;
	~Message() = default;
	Message(string from, string to, string message);
	
	string getFrom();
	string getTo();
	string getMessage();
	bool getSlotStatus();

	void setFrom(string s);
	void setTo(string s);
	void setMessage(string s);
	void setSlotStatusFalse();

	void MessageCout();

};

