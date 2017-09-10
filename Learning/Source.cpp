#include <iostream>
#include <string>
using namespace std;


string username;

class myPrintTextClass
{
public:
	void greetingmsg()
	{
		cout << "Here there! \n";
	}

	void askingname()
	{
		cout << "Whats Your Name: \n";
	}

	void welcomemsg()
	{
		cout << "Welcome Back, " + username + ". \n";
	}
};
class inputDataClass
{
public:
	void entername()
	{
		cin >> username;
	}
};


int main()
{
	myPrintTextClass printobj;
	inputDataClass inputobj;

	printobj.greetingmsg();
	printobj.askingname();

	inputobj.entername();

	printobj.welcomemsg();
	system("pause");
	// cin.get();
	return 0;
}