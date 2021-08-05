#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Please enter a number: " << endl;
    cin >> number;
    if (number == 0)
        cout << "You entered 0." << endl;
        else if (number % 2 == 0)
        cout << "Number " << number << " is positive." << endl;
        else
        cout << "Number " << number << " is negative." << endl;
        
    return 0;
}