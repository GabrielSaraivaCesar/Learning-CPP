
#include <iostream>
#include <map>
#include <string>
#include <sstream>

using namespace std;

const string algorithms[2] = {
    "Quick Sort",
    "Bubble Sort"
};

int requestAlgorithmChoice() {
    cout << "Please choose an algorithm:" << endl;
    int algorithmsArraySize = (sizeof(algorithms) / sizeof(*algorithms));

    for (int c = 0; c < algorithmsArraySize; c++) {
        cout << "[" << c << "]: " << algorithms[c] << endl;
    }

    cout << endl;
    string chosenValue;
    cin >> chosenValue;

    int chosenIndex;
    stringstream(chosenValue) >> chosenIndex;

    return chosenIndex;
}


int main() {
   
    int algorithm = requestAlgorithmChoice();
    return 0;
}