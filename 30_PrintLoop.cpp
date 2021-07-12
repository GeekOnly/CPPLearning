#include <iostream>
using namespace std;

/*
* *
* * *
* * * *
* * * * **/

/*
int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << "\n";
        
    }

    return 0;
}*/

/*
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5*/

/*
int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 1; i <= rows; ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
           cout << j << " ";
        }
        cout << "\n";
    }
    return 0;
    
}*/

/*
A
B B
C C C
D D D D
E E E E E
*/

/*
int main()
{
    char input, alphabet = 'A';

    cout << "Enter the uppercase character you want to print in the last row: ";
    cin >> input;

    for(int i = 1; i <= (input - 'A'+1); ++i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << alphabet << " ";
        }
        ++ alphabet;

        cout << endl;      
    }
    return 0;
}*/

/*
* * * * *
* * * *
* * *
* *
*
*/

/*
int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = rows; i >= 1;--i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}
*/

/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/
/*
int main()
{
    int rows;

    cout << "Enter Number of Rows: ";
    cin >> rows;

    for (int i = rows; i >=1; --i)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << i << " ";
        }
        cout << "\n";
        
    }
    return 0;
    
}*/

/*
     *
    ***
   *****
  *******
 *********
*/
/*
int main()
{
    int space, rows;

    cout << "Enter Number of Rows: ";
    cin >> rows;

    for (int i = 1,k = 0; i <= rows; ++i, k = 0)
    {
        for (space = 1; space <= rows-i; ++space)
        {
            cout << "  ";
        }

        while (k != 2*i -1)
        {
            cout << "* ";
            ++k;
        }
        
        cout << endl;
    }
    return 0;
    
}*/

/*
     1
    232
   34543
  4567654
 567898765
*/

/*
int main()
{
    int rows, count = 0, count1 = 0, k = 0;

    cout << "Enter number of rows: ";
    cin >> rows;
    
    for (int i = 1; i <= rows; ++i)
    {
        for (int space = 1; space <= rows-i; ++space)
        {
            cout << "  ";
            ++count;
        }
        
        while (k != 2*i-1)
        {
            if(count <= rows-1)
            {
                cout << i+k << " ";
                ++count;
            }
            else
            {
                ++count1;
                cout << i+k-2*count1 << " ";
            }
            ++k;
        }
        count1 = count = k = 0;

        cout << endl;
        
    }
    return 0;
}
*/

/*
*********
 *******
  *****
   ***
    *
*/

/*
int main()
{
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int  i = rows; i >= 1; --i)
    {
        for (int space = 0; space < rows-i; ++space)
        cout << "  ";
        
        for (int j = i; j <= 2*i-1; ++j)
        cout << "* ";
                
        for (int j = 0; j < i-1; ++j)
        cout << "* ";
        
        cout << endl;
    }
    return 0;
}
*/

/*
       1
      1 1
    1  2  1
   1  3  3  1
 1  4  6  4  1
1  5  10  10  5  1
*/

/*
int main()
{
    int rows,coef = 1;

    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++)
    {
        for (int space = 1; space <= rows-i; space++)
        cout << "  ";

        for (int j = 0; j <= i; j++)
        {
            if(j == 0 || i == 0)
              coef = 1;
            else
            coef = coef*(i-j+1)/j;

            cout << coef << "   ";
        }
        cout << endl;
    }
    return 0;
}
*/

/*
1
2 3
4 5 6
7 8 9 10
*/

int main()
{
    int rows, number = 1;

    cout << " Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows;i++)
    {
        for (int j = 1; j <= i; ++j)
        {
            cout << number << " ";
            ++ number;
        }
        cout << endl;
    }
}