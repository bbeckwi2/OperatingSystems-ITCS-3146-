#include <iostream>
using namespace std;
//Brandon Beckwith
int main()
{
    int input[10];
    int sizeOfInput = sizeof(input)/sizeof(input[0]);
    cout << "Please input 10 numbers!\n";
    
    for (int i = 0; i < sizeOfInput;i++){
        cout << "Input the next number [" << (i+1) << "] :";
        cin >> input[i];
    }
    
    cout << "Printing numbers in reverse order!\n";
    
    for (int i = sizeOfInput; i > 0; i--){
        cout << input[i-1] << ", ";
    }
    cout << "\n";
    
    //Sorting
    bool swap = false;
    do {
        swap = false;
        for (int i=0; i < sizeOfInput; i ++){
            if (input[i] > input[i+1]){
                int temp = input[i];
                input[i] = input[i+1];
                input[i+1] = temp;
                swap = true;
            }
        }
    } while (swap);
    
    cout << "Displaying sorted numbers!\n";
    
    for (int i = 0; i < sizeOfInput;i++){
        cout << input[i] << ", ";
    }
    
    return 0;
}