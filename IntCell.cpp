#include "IntCell.h"


IntCell::IntCell (int initialValue) : storedValue {initialValue} 

{
	cout << "IntCell Constructor" << endl;
}

int IntCell::read() const
{
	return storedValue;
}

void IntCell::write(int x) 
{
	storedValue = x ;
}
