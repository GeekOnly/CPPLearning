#include <iostream>
using namespace std;

int main()
{
    int a = 5,b=10,temp;

    cout << "Before swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

//วิธีแรกเปลี่ยนสลับค่าโดยเก็บบนตัวแปร
  /*  temp = a;
    a = b;
    b = temp;*/

//วิธีที่สองเปลี่ยนค่าโดยไม่ใช้ตัวแปรเก็บค่า
    a = a + b;
    b = a - b;
    a = a - b;

    cout << "\nAfter swapping." << endl;
    cout << "a = " << a << ", b = " << b << endl;

    return 0;
}