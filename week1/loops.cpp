#include <iostream>
using namespace std;

//Brandon Beckwith
int main()
{
    int numZero = 0;
    int numNegative = 0;
    int numPositive = 0;
    int sum = 0;
    for (int i=0; i < 10; i++){
        int input;
        cout << "Please enter a number:";
        cin >> input;
        if (input > 0){
            numPositive++;
        } else if (input < 0){
            numNegative++;
        } else {
           numZero++;
        }
        sum += input;
    }
    
    cout << "The number of positive values is: " << numPositive << endl;
    cout << "The number of negative values is: " << numNegative << endl;
    cout << "The number of zero values is:     " << numZero << endl;
    cout << "The total sum of values is:       " << sum << endl;
    cout << "The average of all values is:     " << sum / (float) 10 << endl;
    return 0;
}