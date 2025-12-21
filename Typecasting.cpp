#include<iostream>

using namespace std;

int main() {

    float a = 5.55;
    int b = 5;

    cout<<"The value of a is: "<< int(a)<< endl;
    cout<<"The value of b is: "<< (float)b<< endl;

    int c = (int)a;

    cout<<"The value of c is: "<< c<< endl;

    cout<<"The value of a + b is: "<< a + b<< endl;
    cout<<"The value of int(a) + b is: "<< int(a) + b<< endl;
    cout<<"The value of (int)a + b is: "<< (int)a + b<< endl;
    
    // (int)a = int(a)

    return 0;
}