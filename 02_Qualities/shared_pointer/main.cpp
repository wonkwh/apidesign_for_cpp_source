
#include "myobject.h"
#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
	cout << "> main()" << endl;

	{
		apibook::MyObjectPtr ptr;

		// create a new instance of MyObject
		cout << "> CreateInstance(1)" << endl;
		ptr = apibook::MyObject::CreateInstance(1);

		// create another instance of MyObject
		cout << "> CreateInstance(2)" << endl;
		ptr = apibook::MyObject::CreateInstance(2);
	}
	// both instances get deleted when they go out of scope

	cout << "> exit()" << endl;
	return 0;
}
