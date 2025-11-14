#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "=== CALCULADORA BASICA ===" << endl;

    cout << "Ingresa el primer numero: ";
    cin >> a;

    cout << "Ingresa el operador (+, -, *, /): ";
    cin >> op;

    cout << "Ingresa el segundo numero: ";
    cin >> b;

    double resultado;

    switch (op) {
        case '+':
            resultado = a + b;
            break;

        case '-':
            resultado = a - b;
            break;

        case '*':
            resultado = a * b;
            break;

        case '/':
            if (b == 0) {
                cout << "Error: Division por cero no permitida.\n";
                return 0;
            }
            resultado = a / b;
            break;

        default:
            cout << "Operador no valido.\n";
            return 0;
    }

    cout << "\nResultado: " << resultado << endl;

    return 0;
}