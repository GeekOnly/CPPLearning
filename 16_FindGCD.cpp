#include <iostream>
using namespace std;

int main()
{
    int n1,n2,hcf;

    cout << "Enter two numbers: ";
    cin >> n1 >> n2;

//การหาค่าตัวแปรที่ลบการอย่างลงตัว
 /*   while(n1 != n2)
    {
        if(n1 > n2)
           n1 -= n2;
        else
           n2 -= n1;
    }

    cout << "HCF = " << n1;
*/
//สลับค่าถ้า n2 มากกว่า n1
    if(n2 > n1)
    {
        int temp = n2;
        n2 = n1;
        n1 = temp;
    }

    for(int i = 1; i <= n2; ++i)
    {
        if(n1 % i == 0 && n2 % i == 0)
        {
            hcf = i;
        }
    }
    
    cout << "HCF = " << hcf;
    return 0;
}