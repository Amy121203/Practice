#include <iostream>
using namespace std;

int main()
{
    int num1, num2;
    int temp;

    cout << "Type Value of num1 :" << endl;
    cin >> num1;

    cout << "Type Value of num2 :" << endl;
    cin >> num2;

    temp = num1;
    num1 = num2;
    num2 = temp;

    cout << "After swapping values" << endl;
    cout << "Value of num1 " << num1 << endl;
    cout << "Value of num2 " << num2;
    return 0;
}