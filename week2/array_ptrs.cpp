#include <iostream>
using namespace std;


//Group 8
int main()
{
    int size = 4;
    int my_ints[size];
    int *my_ptrs[size];
    
    for(int x = 0; x < size; x++){
        //Accept user input
        cout << "Enter integer [" << x + 1 << "] :";
        cin >> my_ints[x];
        
        //Reference the points to the int array
        my_ptrs[x] = &my_ints[x]; 
    }
    
    //Sorting (bubble sort using pointers)
    bool swap = false;
    do {
        swap = false;
        for (int i=0; i < size - 1; i++){
            if (*my_ptrs[i] > *my_ptrs[i+1]){
                int * temp = my_ptrs[i];
                my_ptrs[i] = my_ptrs[i+1];
                my_ptrs[i+1] = temp;
                swap = true;
            }
        }
    } while (swap);
    
    cout << "Displaying sorted numbers!\n";
    
    //Print output
    for (int i = 0; i < size; i++){
        cout << "my_pts["<< i <<"] = " << *my_ptrs[i] <<"\n";
    }
    
    return 0;
}