#include <iostream>
#include <string>
using namespace std;

void print(void *ptr, char type)
{
    switch (type)
    {
    case 'i':
        cout << *(int *)ptr << endl;
    case 'd':
        cout << *(double *)ptr << endl;
        break;
    case 'f':
        cout << *(float *)ptr << endl;
        break;
    case 's':
        cout << *(string *)ptr << endl;
        break;
    default:
        cout << "Cannot print" << endl;
        break;
    }
}

int main()
{

    int a = 20;
    char firstLatter = 'a';
    string name = "santosh";
    double salary = 10000.53;

    print(&a, 'i');

    print(&name, 's');
    print(&salary, 'd');
    print(&firstLatter, 'c');

    return 0;
}