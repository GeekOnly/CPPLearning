/*#include <iostream>
using namespace std;

int main()
{
    string str = "C++ Programming is awesome";
    char checkCharecter = 'a';
    int count = 0;

    for(int i =0; i < str.size();i++)
    {
        if(str[i] == checkCharecter)
        {
            ++ count;
        }
    }

    cout << "Number of " << checkCharecter << " = " << count;

    return 0;
}*/

#include <iostream>
using namespace std;
int main()
{
    char c[] = "C++ programming is not easy.", check = 'm';
    int count = 0;

    for(int i =0; c[i] != '\0';++i)
    {
        if(check == c[i])
         ++count;
    }
    cout << "Frequency of " << check << " = " << count;
    return 0;
}