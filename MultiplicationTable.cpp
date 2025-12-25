#include<iostream>

using namespace std;

int main() {

    int n, m, i;

    cout<<"Enter the number to display its multiplication table: ";
    cin>>n;

    cout<<"Enter the range for the multiplication table: ";
    cin>>m;

    cout<<"The multiplication table of "<< n<< endl;

    for(i = 1; i <= m; i++) {
        cout<<n<< " * "<< i<< " = "<< n * i<< endl;
    }

    return 0;
}