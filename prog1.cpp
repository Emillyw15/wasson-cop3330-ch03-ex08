#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    cout << "What is the number? ";
    if (cin >> num) {
        if ((num % 2) == 0) {
            cout << "The value " << num << " is an even number.";
        } else {
            cout << "The value " << num << " is an odd number.";
        }
    } else {
        cout << "Invalid. Enter a number.";
    }

    return 0;
}