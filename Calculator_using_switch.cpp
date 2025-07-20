//Ishan Danech
//24070123047
//ENTC A2
#include <iostream>
using namespace std;

int main() {
    char c;
    float a, b;
    cout << "Enter operator: ";
    cin >> c;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    switch(c) {
        case '+': cout << "Result: " << a + b; break;
        case '-': cout << "Result: " << a - b; break;
        case '*': cout << "Result: " << a * b; break;
        case '/': 
            if(b != 0)
                cout << "Result: " << a / b; 
            else 
                cout << "Cannot divide by zero!";
            break;
        default: cout << "Invalid operator!";
    }

    return 0;
}