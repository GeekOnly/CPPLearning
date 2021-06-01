#include <iostream>
using namespace std;

int main()
{
    int firstNumber,secondNumber,sumOfTwoNumbers;

    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    //ผลรวมระหว่าง FirstNumber + secondNumber มาเก็บใน SumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;

    //แสดงผล
    cout << firstNumber << " + " << secondNumber << " = " << sumOfTwoNumbers;

    return 0;
}