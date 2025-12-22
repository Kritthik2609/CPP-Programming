#include<iostream>
#include<iomanip>

using namespace std;

int main() {
    // Manipulators: endl & setw

    int a = 5, b = 10, c = 100;

    cout<<"The value of a is: "<< a<< endl;
    cout<<"The value of b is: "<< b<< endl;
    cout<<"The value of c is: "<< c<< endl;

    cout<<"The value of a (using setw) is: "<< setw(4)<< a<< endl;
    cout<<"The value of b (using setw) is: "<< setw(4)<< b<< endl;
    cout<<"The value of c (using setw) is: "<< setw(4)<< c<< endl;

    return 0;
}