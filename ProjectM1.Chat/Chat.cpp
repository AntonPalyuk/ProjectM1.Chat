#include "Chat.h"
#include "Message.h"
#include <iostream>
using namespace std;

Chat::Chat(int length) : _length( length )
{
	_mess = new Message[length];


	
}

void Chat::addMessage(string from, string to, string message)
{
	for (int i = 0; i < _length; ++i)
	{
		if (_mess[i].getSlotStatus())
		{
			_mess[i].setFrom(from);
			_mess[i].setTo(to);
			_mess[i].setMessage(message);
			_mess[i].setSlotStatusFalse();

			break;
		}
	}


}

void Chat::showChat()
{
	for (int i = 0; i < _length; ++i)
	{
		
		if (_mess[i].getSlotStatus() == false)
		{
			_mess[i].MessageCout();
		}
			
			
		

	}

}