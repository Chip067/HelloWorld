/*Main File*/
#include "HelloWorld.h"

using std::cout;
using std::endl;

int main() {

	// Create HelloWorld object and set the message
	HelloWorld hello;
	hello.SetMessage("Setting the Hello World message!");

	// Print the message	
	cout << hello.GetMessage() << endl;

	system("pause");
	return 0;
}