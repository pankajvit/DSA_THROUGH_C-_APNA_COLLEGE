#include<iostream>
using namespace std;
int main()
{
    int num;
    int sum = 0;
    int rem;
    cout<<"Enter a Number :";
    cin>>num;
    int n = num;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + rem * rem * rem;
        n = n / 10;
    }
    if(sum == num) {
        cout<<"It is a Armstrong Number";
    } else {
        cout<<"Not a Armstrong Number";
    }
    return 0;
}