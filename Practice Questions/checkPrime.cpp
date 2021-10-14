#include <iostream>
using namespace std;
int main()
{
    int num;
    int diviserNumber = 2;
    cout << "Enter a number(to check prime number or not) :";
    cin >> num;
    while (diviserNumber < num)
    {
        if (num % diviserNumber == 0)
        {
            cout << "Not a prime Number";
            break;
        }
        else
        {
            diviserNumber++;
        }
    }
    if (diviserNumber == num)
    {
        cout << "It is a prime Number";
    }
    return 0;
}