/*HelloWorld source file*/
#include "HelloWorld.h"

class HelloWorld
{
public:
	HelloWorld();
	~HelloWorld();

	string GetMessage();
	void SetMessage(string);

private:
	 string message;
};

HelloWorld::HelloWorld()
{
	/*Initialise message to HelloWorld*/
	message = "Hello World!";
}

HelloWorld::~HelloWorld()
{
}

string HelloWorld::GetMessage() {
	return message;
}

void HelloWorld::SetMessage(string set) {
	message = set;
}