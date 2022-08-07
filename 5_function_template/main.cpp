
#include <iostream>

using namespace std;

// Templates can let us to make generic function types
template <class MyType>
MyType sum(MyType a, MyType b) {
    return a + b;
}


// It can have multiple types
template <class T, class N>
bool are_equal(T a, N b) {
    return a == b;
}


// parameters doesn't need to be classes
template <class T, int N>
T multiply(T a) {
    return a * N;
}


int main() {

    // Then we can have dynamic types, but it's good to declare what you want first
    double x = sum<double>(1.7, 2.2);
    string y = sum<string>("1.7", "2.2");
    
    cout << x << endl;
    cout << y << endl;

    cout << are_equal<int, double>(10, 10.0) << endl;
    cout << multiply<double, 2>(2.5) << endl;
    
    return 0;
}