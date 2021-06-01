#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter an integer: ";
    cin >> n;

//เช็คค่าโดยใช้ if else
    /*if(n % 2 == 0)
       cout << n << " is even.";
    else
       cout << n << " is odd.";*/

//เช็คค่าโดยไม่ใช้ if else
    (n % 2 == 0 ) ? cout << n << " is even." : cout << n << " is odd.";

    return 0;
}