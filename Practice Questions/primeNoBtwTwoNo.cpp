#include<iostream>
using namespace std;
bool isPrime(int);
int main()
{
    int a,b;
    cout<<"Enter Two Number :";
    cin>>a>>b;
    for(int i=a;i<b;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    return 0;
}
bool isPrime(int i)
    {
        for(int j=2;j < i;j++) {
            if(i % j == 0){
                return false;
            }
        }
        return true;
    }