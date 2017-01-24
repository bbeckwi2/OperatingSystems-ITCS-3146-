#include <iostream>
using namespace std;

//Group 8

//Swaps two numbers, uses references
void swapInts(int* num1, int * num2){
    int temp = * num1;
    *num1 = *num2;
    *num2 = temp;
}

int main(){
    int num1, num2;
    
    //Get input
    cout << "Please enter the value of num1: ";
    cin >> num1;
    
    cout << "Please enter the value of num2: ";
    cin >> num2;
    
    //Swap
    swapInts(&num1,&num2);
    
    //Print output
    cout << "num1 = " << num1 << "\n";
    cout << "num2 = " << num2 << "\n";
}