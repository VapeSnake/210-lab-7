//COMSC-210|Lab 7|Noel Mier-Luna
#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5; //Keep those magic numbers out of Diablo Valley College.

string* reverseArray(string*, int SIZE);
void displayArray(string*, int SIZE);

main()
{
    string *arrayPtr = nullptr; // Creates our pointer for our dynamic string array
    arrayPtr = new string[SIZE]{"Bill", "Javier", "Arthur", "John", "Dutch"};

    
    return 0;
}