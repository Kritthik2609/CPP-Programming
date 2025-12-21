#include<iostream>

using namespace std;

int c = 5;

int main() {

    int a, b, c;

    cout<<"Enter the value of a: ";
    cin>>a;

    cout<<"Enter the value of b: ";
    cin>>b;

    c = a + b;

    cout<<"The value of c is (local value): "<< c<< endl;

    cout<<"The global value of c is: "<< ::c;

    return 0;
}