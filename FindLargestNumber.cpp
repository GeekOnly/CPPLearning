#include <iostream>
using namespace std;

int main()
{
    float n1,n2,n3;

    cout << " Enter three Number: ";
    cin >> n1 >> n2 >> n3;

//case 1
  /*  if(n1 >= n2 && n1 >= n3)
       cout << "Largest number: " << n1;

    if(n2 >= n1 && n2 >= n3)
       cout << "Largest number: " << n2;

    if(n3 >= n2 && n3 >= n1)
       cout << "Largest number: " << n3;
    
//case 2
    if((n1 >= n2) && (n1 >= n3))
       cout << "Largest number: " << n1;
    else if((n2 >= n1 && n2 >= n3))
       cout << "Largest number: " << n2;
    else
       cout << "Largest number: " << n3;*/

//case 3
   if(n1 >= n2){
     if(n1 >= n3)
       cout << "Largest number: " << n1;
     else
       cout << "Largest number: " << n3;
   }else{
     if(n2 >= n3)
       cout << "Largest number: " << n2;
     else
       cout << "Largest number: " << n3;
   }

    return 0;
}