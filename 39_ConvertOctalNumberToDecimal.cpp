#include <iostream>
/*
#include <cmath>
using namespace std;

int octalToDecimal(int octalNumber);

int main()
{
    int octalNumber;
    cout << "Enter an octal number: ";
    cin >> octalNumber;
    cout << octalNumber << " in ocatal = " << octalToDecimal(octalNumber) << " in decimal";
    
    return 0;
}

// Function to convert octal number to decimal
int octalToDecimal(int octalNumber)
{
    int decimalNumber = 0, i= 0, rem;
    while (octalNumber != 0)
    {
        rem = octalNumber % 10;
        octalNumber /= 10;
        decimalNumber += rem * pow(8, i);
        ++i;
    }
    return decimalNumber;
}
*/

#include <iostream>
using namespace std;

int decimalToOctal(int decimalNumber);

int main()
{
    int decimalNyumber;
    cout << "Enter a decimal number: ";
    cin >> decimalNyumber;
    cout << decimalNyumber << " in decimal = " << decimalToOctal(decimalNyumber) << " in octal";

    return 0;
}

// Function to convert decimal number to octal
int decimalToOctal(int decimalNumber)
{
    int rem, i = 1, octalNumber = 0;
    while (decimalNumber != 0)
    {
        rem = decimalNumber % 8;
        decimalNumber /= 8;
        octalNumber += rem * i;
        i *= 10;
    }
    return octalNumber;
}