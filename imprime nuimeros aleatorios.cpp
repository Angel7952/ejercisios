#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingresa el numero de filas: ";
    cin >> n;

    // ================================
    // 1. PATRON ALINEADO A LA DERECHA
    // ================================
    cout << "\nPatron alineado a la derecha:\n";

    for (int i = 1; i <= n; i++) {
        // Espacios
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        // Asteriscos
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    // ===============================
    // 2. PATRON INVERTIDO
    // ===============================
    cout << "\nPatron invertido:\n";

    for (int i = n; i >= 1; i--) {
        for (int k = 1; k <= i; k++) {
            cout << "*";
        }
        cout << endl;
    }

    // ===============================
    // 3. PATRON CUADRADO
    // ===============================
    cout << "\nPatron cuadrado:\n";

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
