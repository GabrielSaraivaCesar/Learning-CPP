
#include <iostream>
#include <string>

using namespace std;

string getLongString(string letter) {
    string result = "";
    for (int c = 0; c < 100; c++) {
        result += letter;
    }
    return result;
}

// This first method will make a copy of A and B to then generate the result
// This might allocate too much data in memory just for copying this method params
string concatenate(string a, string b) {
    return a + b;
}

// This method will receive the pointer and use the reference to get the original values and then generate the result
// This will not duplicate data
// Warning passing by reference is not always ideal and can lead to programming errors in too complex codes 
string concatenate(string* a, string* b) {
    return *a + *b;
}

// This method receives values by reference, but they are not mutable inside of the function
// This makes code safer when you need to add performance but still don't want to let an open door for a programming error
string safeConcatenate(const string* a, const string* b) {
    return *a + *b;
}

int main() {
    string longStr1 = getLongString("A");
    string longStr2 = getLongString("B");

    /* Obs: Method Overloading Technique  */
    string c1 = concatenate(longStr1, longStr2);
    string c2 = concatenate(&longStr1, &longStr2);
    string c3 = safeConcatenate(&longStr1, &longStr2);

    cout << c1 << endl;
    cout << c2 << endl;
    cout << c3 << endl;

    return 0;
}