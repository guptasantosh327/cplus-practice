#include <iostream>

using namespace std;

// Accepting min and max as pointers and accessing the address of passed params and changing the value
void getMinAndMax(int numbers[], int size, int *min, int *max)
{
    for (int i = 1; i < size; i++)
    {
        if (numbers[i] > *max)
        {
            *max = numbers[i];
        }

        if (numbers[i] < *min)
        {
            *min = numbers[i];
        }
    }
}

int main()
{
    int numbers[5] = {1, 5, -2, 1000, 500};
    int min = numbers[0];
    int max = numbers[0];

    cout << min << " " << max << endl;
    // Passing Address of min and max
    getMinAndMax(numbers, 5, &min, &max);
    cout << "Min is" << min << endl;
    cout << "Max is " << max << endl;
    return -1;
}