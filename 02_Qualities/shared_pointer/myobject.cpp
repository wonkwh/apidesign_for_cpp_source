

#include "myobject.h"
#include <iostream>

using std::cout;
using std::endl;

namespace apibook {

MyObject::MyObject(int id) :
	mID(id)
{
	cout << "... created object " << mID << endl;
}

MyObject::~MyObject()
{
	cout << "... destroyed object " << mID << endl;
}

MyObjectPtr MyObject::CreateInstance(int id)
{
	return MyObjectPtr(new MyObject(id));
}

}

