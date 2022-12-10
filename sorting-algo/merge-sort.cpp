#include <iostream>

using namespace std;

void merge(int arr[], int const begin, int const mid, int const end)
{
}

void mergeSort(int arr[], int const begin, int const end)
{

    // Base case
    if (begin >= end)
    {
        return;
    }

    // Mid
    auto mid = begin + (end - 1) / 2;

    // Left Breakdown
    cout << "Left Breakdown" << begin << " " << mid << endl;
    mergeSort(arr, begin, mid);

    // Right Breakdown
    mergeSort(arr, mid + 1, end);
    cout << "Right Breakdown" << mid + 1 << " " << end << endl;

    cout << "Finally Merging" << endl;
    // Merging sorted array
    merge(arr, begin, mid, end);
}

void printArray(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[6] = {12, 11, 13, 5, 6, 7};
    cout << "Unsorted Array" << endl;
    printArray(arr, 5);

    mergeSort(arr, 0, 5);

    cout << "Merge Sorted Array" << endl;
}