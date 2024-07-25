#include <iostream>
#include <string>
using namespace std;
int power;
string state = "n";

long int factorial(int n) {
    if (n>=1)
        return n*factorial(n-1);
    else
        return 1;
}

long int combinatoria(int n, int x) {
    return (factorial(n))/(factorial(n - x) * factorial(x));
}

int main() {
    cout << "Input the power for the binomial equation: \n";
    cin >> power;
    cout << "Is the binomial (a+b)? (y/n)";
    cin >> state;
    cout << "\n";
    if (state == "y") {
        
        cout << "(a+b)^" << power << " = ";
        for (int i = 0; i <= power; i++) {
            if (!(i == power)) {
                cout << combinatoria(power, i) << "a^" << power - i << "b^" << i << " + ";
            } else {
                cout << combinatoria(power, i) << "a^" << power - i << "b^" << i << "\n";
            }   
        }
    } else {
        cout << "(a-b)^" << power << " = ";
        for (int i = 0; i <= power; i++) {
            if (i % 2 == 0) {
                if (!(i == power)) {
                    cout << combinatoria(power, i) << "a^" << power - i << "b^" << i << " - ";
                } else {
                    cout << combinatoria(power, i) << "a^" << power - i << "b^" << i << "\n";
                }   
            } else {
                if (!(i == power)) {
                    cout << combinatoria(power, i) << "a^" << power - i << "b^" << i << " + ";
                } else {
                    cout << combinatoria(power, i) << "a^" << power - i << "b^" << i << "\n";
                }  
            }
        }
    }  
    return 0;
}
