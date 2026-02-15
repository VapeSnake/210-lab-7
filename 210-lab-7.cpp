// COMSC-210|Lab 7|Noel Mier-Luna
#include <iostream>
#include <string>

using namespace std;

const int SIZE = 5; // Keep those magic numbers out of Diablo Valley College.

string *reverseArray(string *, int SIZE);
void displayArray(string *, int SIZE);

main()
{
    string *arrayPtr = nullptr; // Creates our pointer for our dynamic string array
    arrayPtr = new string[SIZE]{"Bill", "Javier", "Arthur", "John", "Dutch"};

    delete[] arrayPtr; // Always release memory when done.
    return 0;
}

string* reverseArray(string *ptr, int size)
{
    for (int i = 0; i < size; i++) //Loop should only happen 2(?) times. Any more will mess with reverse function.
    {
        string temp = *(ptr + i); // Create temp to begin reverse loop
        *(ptr + i) = *(ptr + (size - 1 - i)); // Each element will swap from outside-to-inside
        *(ptr + (size - 1 - i)) = temp;
    }
}