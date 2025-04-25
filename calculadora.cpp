#include <iostream>

using namespace std;

double multiplicar(double a, double b) {
    return a * b;
}

int main() {
    double num1, num2;

    cout << "Introduce el primer numero: ";
    cin >> num1;

    cout << "Introduce el segundo numero: ";
    cin >> num2;

    double resultado = multiplicar(num1, num2);
    cout << "El resultado de multiplicar " << num1 << " x " << num2 << " = " << resultado << endl;


}

double dividir(double a, double b) {
    if (b == 0) {
        cout << "Error: No se puede dividir entre cero." << endl;
        return 0;
    }
    return a / b;

    return 0;
}
















