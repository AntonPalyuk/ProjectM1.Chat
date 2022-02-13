#pragma once
#include <string>
#include "Message.h"
using namespace std;

class Chat
{
private:
	Message* _mess;
	int _length = 0;
	

public:
	Chat() = default;
	Chat(int length);
	~Chat() = default;

	void showChat();
	void addMessage(string from, string to, string message);
};

