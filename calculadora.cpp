#include <iostream>

using namespace std;

double multiplicar(double a, double b) {
    return a * b;
}

int main() {
    double num1, num2;

    cout << "Introduce el primer n�mero: ";
    cin >> num1;

    cout << "Introduce el segundo n�mero: ";
    cin >> num2;

    double resultado = multiplicar(num1, num2);
    cout << "El resultado de multiplicar " << num1 << " y " << num2 << " es: " << resultado << endl;

    return 0;
}
