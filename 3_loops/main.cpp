
#include <iostream>

using namespace std;

int main() {

    // Using while
    cout << endl << "while" << endl;
    int n =  10;
    while (n > 0) {
        cout << n << ", ";
        n--;
    }
    cout << "Liftoff!" << endl;

    // Using for
    cout << endl << "for" << endl;
    for (int n2 = 10; n2 > 0; n2--) {
        cout << n2 << ", ";
        if (n2 == 3) {
            cout << "Countdown Aborted!!!" << endl;
            break;
        }
    }

    // Using do-while
    cout << endl << "do-while" << endl;
    int n3 = 10;
    do {
        cout << n3 << ", ";
        n3--;
    } while (n3 > 0);
    cout << "Liftoff!" << endl;

    // Using goto
    cout << endl << "goto" << endl;
    int n4 = 10;
    looplabel:
        cout << n4 << ", ";
        n4--;
        if (n4 > 0) {
            goto looplabel;
        }
    cout << "Liftoff!" << endl;


    return 0;
}