#include<iostream>

using namespace std;

int main() {

    int num, remainder, orgNumber, revNumber = 0;

    cout<<"Enter a number: ";
    cin>>num;

    orgNumber = num;

    for( ; num != 0; ) {
        remainder = num % 10;
        revNumber = revNumber * 10 + remainder;
        num = num / 10;
    }

    cout<<"The reverse of "<< orgNumber<< " is: "<< revNumber<< endl;

    return 0;
}