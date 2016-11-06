/*HelloWorld header file*/

#pragma once
#include <iostream>

using std::string;

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
