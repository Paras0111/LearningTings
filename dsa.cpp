#include <iostream>

using namespace std;

class IntCell
{

	public: 
	 explicit IntCell(int initialValue = 0)
		: storedValue { initialValue} { } 
	 int read() const
	 {
	   return storedValue;
	 }
	 void write(int x) 
	 {
	   storedValue = x ; 

        } 

	private: 
		int storedValue;


};
int main()
{

	IntCell Cell(4);
//	Cell.write(3);

	cout << "Cell Val"<<  Cell.read() ;
	cout << "Hello World: " <<  endl;




}
