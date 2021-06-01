#include <iostream>
using namespace std;

int main()
{
    int divisor,dividend,quotient,remainder;

// ค่าที่จะถูกหาร
    cout << "Enter dividend: ";
    cin >> dividend;

// ที่นำมาหาร
    cout << "Enter divisor: ";
    cin >> divisor;

    quotient = dividend / divisor;
    remainder = dividend % divisor;

    cout << "Quotient = " << quotient << endl;
    cout << "Remainder = " << remainder;

    return 0;
}