#include <iostream>

using namespace std;

int main()
{
    int rows, columns;
    // Ask for number of rows and columns
    cout << "Rows Colums" << endl;
    cin >> rows >> columns;

    // Double pointer table which holds the address of each row
    //  Had to add * as it rows going to be pointer of columns
    int **table = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        // Each row will have store columns e.g 3
        table[i] = new int[columns];
    }

    // Adding data in dynamic memmory
    for (int i = 0; i < rows; i++)
    {
        cout << "Enter " << i << " th row: " << endl;
        for (int j = 0; j < columns; j++)
        {
            cin >> table[i][j];
        }
    }

    cout << "Multi Dimensinal Array" << endl;

    // Printing array which stored in dynamic memory
    for (int i = 0; i < rows; i++)
    {

        for (int j = 0; j < columns; j++)
        {
            cout << table[i][j] << "  ";
        }
        cout << endl;
    }

    // Deleting first columns array first
    for (int i = 0; i < rows; i++)
    {
        delete[] table[i];
    }

    // deleting each rows
    delete[] table;

    // Clearing address of table which our program dont need anymore
    table = NULL;

    return -1;
}