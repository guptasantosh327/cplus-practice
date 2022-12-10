#include <iostream>
using namespace std;

int main()
{

    int n;
    // Taking input from user
    cout << "Please enter array length" << endl;
    cin >> n;

    int arr[n];
    cout << "Enter Array Elements" << endl;

    // Taking array elements from user
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Starting from 1st element instead of 0.
    for (int i = 1; i < n; i++)
    {
        // Current element of i which is moving forward
        int current = arr[i];
        // One index behind of i to do comparison
        int j = i - 1;

        /*  While previous value is greater than current.
            Move/Shift previous value one index ahead
            decrement j to check more previous value and move and shift if pass the while condition
        */
        while (arr[j] > current && j >= 0)
        {
            arr[j + 1] = arr[j];
            cout << "j " << j;
            j--;
        }

        // add current to suitable place with respect to j.
        // j depends upon how many times it have to swipe in while loop
        arr[j + 1] = current;
    }

    cout << "Sorted Array with insertion sort" << endl;
    // Print Array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}