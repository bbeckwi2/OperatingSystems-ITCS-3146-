#include <iostream>
using namespace std;

//Brandon Beckwith
int main()
{
    
    //Part 1
    int myInt = 15;
    int * myPointer = &myInt;
    
    //Part 2
    cout << "The location of myInt is: " << &myInt << ", and the value of myPointer is: " << myPointer << "\n";
    cout << "The value of myInt is: "<< myInt << ", and the value pointed to by myPointer is: " << *myPointer << "\n\n";
    
    //Part 3
    myInt = 10;
    cout << "The location of myInt is: " << &myInt << ", and the value of myPointer is: " << myPointer << "\n";
    cout << "The value of myInt is: "<< myInt << ", and the value pointed to by myPointer is: " << *myPointer << "\n\n";
    return 0;
}