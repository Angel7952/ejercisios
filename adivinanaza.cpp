#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()

using namespace std;

int main() {
    // Inicializar la semilla aleatoria
    srand(time(0));

    // Número secreto entre 1 y 100
    int secreto = rand() % 100 + 1;
    int intento = 0;

    cout << "=== JUEGO DE ADIVINANZAS ===" << endl;
    cout << "Adivina el numero entre 1 y 100." << endl;

    // Bucle hasta adivinar
    do {
        cout << "Tu intento: ";
        cin >> intento;

        if (intento > secreto) {
            cout << "Muy alto! Intenta un numero mas pequeno." << endl;
        } else if (intento < secreto) {
            cout << "Muy bajo! Intenta un numero mas grande." << endl;
        } else {
            cout << "Correcto! Has adivinado el numero!" << endl;
        }

    } while (intento != secreto);

    return 0;
}
