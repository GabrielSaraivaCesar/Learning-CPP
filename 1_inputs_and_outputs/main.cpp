
#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "What's your name? ";

    string username;
    getline(cin, username);
    
    cout << "Hello " << username << endl;
    return 0;
}