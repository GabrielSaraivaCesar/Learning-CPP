
#include <iostream>
#include "testfile.h"

using namespace std;

int globalVariable = 10;
int defaultGlobalValue;

int main() {
    
    cout << globalVariable << endl;

    // Block scope
    {
        int blockScopeVariable = 20;
        cout << blockScopeVariable << endl;
    }

    cout << mytest::namespaceScopedVariable << endl;

    int defaultLocalValue;

    cout << "Global default value for int: " << defaultGlobalValue << endl;
    cout << "Local default value for int: " << defaultLocalValue << endl;

    return 0;
}