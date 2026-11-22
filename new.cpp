#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    cout << "Enter your name: ";
    cin >> ws; // Ignore leading whitespace
    string name;
    getline(cin, name); // Read the full line including spaces
    cout << "Hello, " << name << "!" << endl;
    return 0;
}