
#include <iostream>
#include <string>

using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sumByRef(int& a, int b) {
    a += b;
    return a;
}

int sumByPointer(int* a, int b) {
    // *a stands by the in memory value of that pointer
    *a += b;
    return *a;
}

/* 
When the function is too small, sometimes it's better to instead of making all the processes of calling a function (stacking arguments, jumps, etc...)
that it just use the code inside the function as it was inline
This action is performed by the compiled, so there's realy no extra processing when the code is being executed.

Large inline functios might lead to big executables, which can impair the efficiency

inline keywords are just a hint for the compiler though, the compiler may decide if it will realy make it inline or not, same thing for methods without the inline keyword
*/
inline int inlineSum(int a, int b) {
    return a + b;
}

int main() {
    int a = 5;
    int b = 4;

    cout << "inlineSum(a, b) result:...... " << inlineSum(a, b) << endl;
    cout << "Current A value:....... " << a << endl << endl;

    cout << "sum(a, b) result:...... " << sum(a, b) << endl;
    cout << "Current A value:....... " << a << endl << endl;
    
    cout << "sumByRef(a, b) result: " << sumByRef(a, b) << endl;
    cout << "Current A value:....... " << a << endl << endl;

    // &a stands by A's pointer
    cout << &a << endl;
    cout << "sumByPointer(&a, b) result: " << sumByPointer(&a, b) << endl;
    cout << "Current A value:....... " << a << endl;
    
    return 0;
}