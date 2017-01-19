#include <iostream>
using namespace std;

//Brandon Beckwith
int main()
{
    int grade;
    char letterGrade = 'F';
    cout << "Please enter your number grade (0-100) :";
    cin >> grade;
    
    if (grade < 0 || grade > 100) {
        cout << "The number grade you entered was invalid!";
        return 0;
    }
    
    if (grade >= 90){
        letterGrade = 'A';
    } else if (grade >= 80){
        letterGrade = 'B';
    } else if (grade >= 70){
        letterGrade = 'C';
    } else if (grade >= 60){
        letterGrade = 'D';
    }
    cout << "You have received a '" << letterGrade << "' in the course.\n";
    return 0;
}