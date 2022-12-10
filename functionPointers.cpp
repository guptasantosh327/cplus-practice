#include <iostream>

using namespace std;

int getNumber(){
    return 5;
}

int main (){
    int hello;
    int a = 5;
    int (* funcPtr)() = getNumber;
    cout << funcPtr()  << endl;
    // cout << funcPtr() << endl;
    return 0;

}