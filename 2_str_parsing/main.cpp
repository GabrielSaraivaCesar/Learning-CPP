
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    time_t start, end;


    string myStrNumber;
    double myDoubleNumber;
    int myIntNumber;

    cout << "Write a number: ";
    cin >> myStrNumber;

    stringstream(myStrNumber) >> myDoubleNumber;
    stringstream(myStrNumber) >> myIntNumber;

    cout << "Double number: " << myDoubleNumber << endl; 
    cout << "Int number: " << myIntNumber << endl; 

    return 0;
}