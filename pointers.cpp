#include <iostream>

using namespace std;

int main()
{

    int luckyNumbers[5];

    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "Enter Numbers: ";
    //     cin >> luckyNumbers[i];
    // }

    for (int j = 0; j < 4; j++)
    {
        cout << "Enter Numbers: ";
        cin >> *(luckyNumbers + j);
    }

    cout << "Entered Numbers are" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << luckyNumbers[i] << " ";
    }
    // cout << luckyNumbers << endl;
    // cout << &luckyNumbers[0] << endl;

    // cout << luckyNumbers + 1 << endl;
    // cout << *(luckyNumbers + 1) << endl;
    // cout << luckyNumbers + 2 << endl;
    // cout << *(luckyNumbers + 2) << endl;
    // cout << luckyNumbers + 3 << endl;
    // cout << *(luckyNumbers + 3) << endl;
    // cout << luckyNumbers + 4 << endl;
    // cout << *(luckyNumbers + 4) << endl;
    return 0;
}