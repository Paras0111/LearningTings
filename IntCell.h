#ifndef IntCell_H
#define IntCell_H

#include <iostream>
using namespace std;
// A Class simulating an integer cell.

class IntCell
{

	public:
		explicit IntCell (int initialValue = 0);
		int read() const;
		void write(int x); 

	private:
		int storedValue; 
};
#endif
