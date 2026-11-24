#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "The sum is: " << a + b << endl;
    cout << "The difference is: " << a - b << endl;
    cout << "The product is: " << a * b << endl;
    if (b != 0) {
        cout << "The quotient is: " << fixed << setprecision(2) << static_cast<double>(a) / b << endl;
    } else {
        cout << "Cannot divide by zero." << endl;
    }
    
    return 0;
}