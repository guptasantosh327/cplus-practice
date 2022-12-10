#include <iostream>

using namespace std;

int main()
{
    int size = 0;
    cout << "Please enter size" << endl;
    cin >> size;

    // Dynamic array creation

    int *myArray = new int[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Array[" << i << "] ";
        cin >> myArray[i];
    }

    for (int i = 0; i < size; i++)
    {
        cout << myArray[i] << "  ";
    }

    delete[] myArray;
    cout << myArray << endl;
    myArray = NULL;
    cout << myArray << endl;
    return -1;
}