#include <iostream>
#include <string>
using namespace std;
int power;

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
    cout << "(a-b)^" << power << " = ";
    for (int i = 0; i <= power; i++) {
        if (!(i == power)) {
            cout << combinatoria(power, i) << "a^" << power - i << "b^" << i << " - ";
        } else {
            cout << combinatoria(power, i) << "a^" << power - i << "b^" << i << "\n";
        }
    }
}