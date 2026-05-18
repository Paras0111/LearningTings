#include <iostream>
using namespace std;

constexpr int Size = 8; 
int buff[Size] = {0} ;
int head = 0, tail = 0, count = 0;

void push(int val) 
{
    buff[tail] = val;
    tail = (tail++) % Size; 
    count++; 
    cout << "int added: " << val << endl; 
}

int pop() 
{
    int temp = buff[head];
    buff[head] = 0;
    head = (head++) % Size;
    count--;
    cout << "Int remmoved: " << temp << endl;
    return temp;
}

bool isFull()
{
    
    return count == Size ; 
}
bool isEmpty()
{
    
        return count == 0;
}

int main()
{   
    

    /**
    Implementing a ring buffer

    1. Size n 
    2. Push pop
    3. Head - points to the element removed
    4. Tail - points to the next empty cell
    5. Tail points to start of the cell if reaches end , hence circular buffer.
    6. head also same, points back to the start.
    
    */
    cout << "hello world" << endl;
    push(23); 
    push(21);
    push(22);
    push(2); 
    push(23); 
    push(34);
    push(21);
    push(43);
    push(34); 
    push(54); 
    pop();
    cout << "Count: " << count << " Head: " << head << " Tail: " << tail << endl;
    return 0;
}