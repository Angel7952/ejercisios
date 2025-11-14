#include <iostream>
using namespace std;

int main() {
    int filas;

    cout << "Ingresa el numero de filas de la piramide: ";
    cin >> filas;

    // Ciclo para cada fila
    for (int i = 1; i <= filas; i++) {

        // Espacios antes de los asteriscos
        for (int j = 1; j <= filas - i; j++) {
            cout << " ";
        }

        // Asteriscos
        for (int k = 1; k <= 2*i - 1; k++) {
            cout << "*";
        }

        cout << endl; // Pasar a la siguiente línea
    }

    return 0;
}