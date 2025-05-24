#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // seed the random number generator

    // initialize the location and state of the percept
    int location = rand() % 2; // randomly choose between 0 and 1
    int state = rand() % 2; // randomly choose between 0 and 1

    // print the initial percept
    for(int i=0;i<=2;i++) {
        cout << "[" << (location == 0 ? "A" : "B") << ", " << (state == 0 ? "Clean" : "Dirty") << "]" << endl;


        if (state == 1) { // if the percept is dirty, then suck
            cout << "Suck" << endl;
            state = 0;
        }// set the state to clean
        else { // otherwise, move to the other location
            cout << (location == 0 ? "Right" : "Left") << endl;
            location = 1 - location; // switch the location
            state = rand() % 2; // generate a new state
        }
    }




    return 0;
}



