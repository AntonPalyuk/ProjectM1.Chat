#include <iostream>
#include "Message.h"
#include "Chat.h"
using namespace std;

int main()
{
	Chat c1(10);

	c1.addMessage("Anton", "Garm", "What`s up?");
	c1.addMessage("Nobody", "Everybody", "Are you here?");
	c1.addMessage("Him", "Me", "Nice to meet you!");
	c1.showChat();



	return 0;
}