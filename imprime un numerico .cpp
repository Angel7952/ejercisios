#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingresa el numero de filas: ";
    cin >> n;

    int num = 1;

    cout << "\nPatron zigzag:\n";

    for (int i = 1; i <= n; i++) {

        if (i % 2 == 1) {
            // Filas impares: imprimir números seguidos
            for (int j = 1; j <= n; j++) {
                cout << num << " ";
                num++;
            }
        } else {
            // Filas pares: imprimir espacios y un número al final
            for (int j = 1; j < n; j++) {
                cout << "  ";
            }
            cout << num;
            num++;
        }

        cout << endl;
    }

    return 0;
}