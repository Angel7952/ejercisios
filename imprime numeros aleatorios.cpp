#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingresa el tamaño del tablero (n): ";
    cin >> n;

    cout << "\nTablero de ajedrez:\n";

    for (int i = 0; i < n; i++) {          // Filas
        for (int j = 0; j < n; j++) {      // Columnas

            // Alternar entre * y +
            if ((i + j) % 2 == 0) {
                cout << "*";
            } else {
                cout << "+";
            }
        }
        cout << endl;
    }

    return 0;
}