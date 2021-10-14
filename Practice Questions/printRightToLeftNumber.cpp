#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number :";
    cin>>n;
    while(n>0) {
        int remainder = n % 10;
        cout<<remainder;
        n=n/10;
    }
    return 0;
}