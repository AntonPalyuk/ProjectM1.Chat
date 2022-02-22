#include "Program.h"

								///Конструкторы

Program::Program()
{
	_users = new User[_programLength];
}

<<<<<<< HEAD
//Program::~Program()
//{
//	delete[] _users;
//}
=======
Program::~Program()
{
	delete[] _users;
}
>>>>>>> 0f686408642cdfadb9969e40fc9ccd584fd1ecf1

								/// Сеттеры

void Program::setUser(string log, string pas, string name, int index)
{
	_users[index].setUser(log, pas, name);

}

<<<<<<< HEAD
//void Program::setUser(string log, string pas, string name, )
//{
//	_users[index].setUser(log, pas, name);
//
//}

=======
>>>>>>> 0f686408642cdfadb9969e40fc9ccd584fd1ecf1
void Program::setStatusOFF()
{
	_chatIsON = false;
}

								/// Геттеры

User* Program::getUserByLogin(string login)
{
	for (int i = 0; i < _programLength; ++i)
	{
		if (_users[i].getLogin() == login)
		{
			return  &_users[i];
		}
<<<<<<< HEAD
		//else
		//{
		//	return nullptr;
		//	cout << "not found!" << endl;
		//}
=======
		else
		{
			return nullptr;
			cout << "not found!" << endl;
		}
>>>>>>> 0f686408642cdfadb9969e40fc9ccd584fd1ecf1
	}
}

User* Program::getCurrentUser() { return _currentUser; }

bool Program::getProgramStatus()
{
	return _chatIsON;

}

							  ///Функционал

void Program::addMessage(string from, string to, string message, int index)
{
	_users[index].addMessage(from, to, message);


}

void Program::printUser(int index)
{
	_users[index].printUser();

}

void Program::printUsers()
{
	for (int i = 0; i < _programLength; ++i)
		{
		_users[i].printUser();
		}

}

void Program::print(int index)
{
	_users[index].print();

}

void Program::registration()
{
	string login, password, name;

	cout << "Enter your login:  " << endl;
	cin >> login;
	cout << "Enter your password:  " << endl;
	cin >> password;
	cout << "Enter your name:  " << endl;
	cin >> name;

<<<<<<< HEAD
	addUser();
	setUser(login, password, name, _programLength - 1);
=======
	addUser(login, password, name);
>>>>>>> 0f686408642cdfadb9969e40fc9ccd584fd1ecf1

	cout << "User successfully created  " << endl << endl;

}

void Program::login()
{
	string login, password;

	cout << "Enter your login:  " << endl;
	cin >> login;
	cout << "Enter your password:  " << endl;
	cin >> password;


	_currentUser = getUserByLogin(login);


}

void Program::mainMenu()
{
	int key;
	
	cout << "Choose option:  " << endl << "1 - Registration " << endl << "2 - Login" << endl << "0 - Quit" << endl << endl;
	cin >> key;

	switch (key)
	{
	case 0:
		setStatusOFF();
		_currentUser = nullptr;
		break;

	case 1:
		registration();
		break;

	case 2:
		login();
		break;

	default:
		cout << "You choosed wrong option, try again" << endl << endl;

		break;
	}

	

}

void Program::userMenu()
{
	int key = 0;
	int userIndex = 0;

	string message, from, to;

	cout << "0 - Quit" << endl << "1 - add message to " << endl << "2 - show chat" << endl << endl;

	cin >> key;

	switch (key)
	{
	case 0:
		setStatusOFF();
		_currentUser = nullptr;
		break;

	case 1:
<<<<<<< HEAD
		cout << "choose user(index): " << endl;
=======
		cout << "choose user: " << endl;
>>>>>>> 0f686408642cdfadb9969e40fc9ccd584fd1ecf1
		cin >> userIndex;

		cout << "From: " << endl;
		cin >> from;

		cout << "To: " << endl;
		cin >> to;

		cout << "enter message" << endl;
		cin >> message;

		addMessage(from, to, message, userIndex);
		break;

	case 2:
		_currentUser->print();
		break;
	}
}
<<<<<<< HEAD
	void Program::addUser()
	{
		User new_user;

		User* n_d2 = new User[_programLength + 1];

		for (int i = 0; i < _programLength; ++i)
		{
			n_d2[i] = _users[i];
		}

		n_d2[_programLength] = new_user;

		delete[] _users;
		_users = n_d2;
		++_programLength;

}

	                                                                    //manual

	void Program::registrationM(string log, string pas, string name)
	{
		
		addUser();
		setUser(log, pas, name, _programLength - 1);

		cout << "User successfully created  " << endl << endl;

	}

	void Program::loginM(string login)
	{
		_currentUser = getUserByLogin(login);
		
		cout << "Current User is:  " << endl;
		_currentUser->printUser();
		cout << endl;
	}
=======
	void Program::addUser(string login, string pasword, string name)
	{
		User new_user(login, pasword, name);

		User* n_d = new User[_programLength + 1];

		for (int i = 0; i < _programLength; ++i)
		{
			n_d[i] = _users[i];
		}

		n_d[_programLength] = new_user;

		delete[] _users;
		_users = n_d;
		++_programLength;

}
>>>>>>> 0f686408642cdfadb9969e40fc9ccd584fd1ecf1
