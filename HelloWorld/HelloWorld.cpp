/*HelloWorld source file*/
#include "HelloWorld.h"

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