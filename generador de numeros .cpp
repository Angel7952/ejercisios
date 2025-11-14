#include <iostream>
#include <random>   // Para generadores modernos
using namespace std;

int main() {
    // Generador de números aleatorios
    random_device rd; 
    mt19937 gen(rd()); // Generador Mersenne Twister (estándar moderno)

    int opcion;

    cout << "=== GENERADOR DE NUMEROS ALEATORIOS ===" << endl;
    cout << "1. Distribucion Uniforme" << endl;
    cout << "2. Distribucion Normal" << endl;
    cout << "Elige una opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        // --- DISTRIBUCIÓN UNIFORME ---
        int minimo, maximo;
        cout << "Ingresa el minimo: ";
        cin >> minimo;
        cout << "Ingresa el maximo: ";
        cin >> maximo;

        uniform_int_distribution<int> dist(minimo, maximo);

        cout << "Numero uniforme generado: " << dist(gen) << endl;
    }
    else if (opcion == 2) {
        // --- DISTRIBUCIÓN NORMAL ---
        double media, desviacion;
        cout << "Ingresa la media: ";
        cin >> media;
        cout << "Ingresa la desviacion estandar: ";
        cin >> desviacion;

        normal_distribution<double> dist(media, desviacion);

        cout << "Numero normal generado: " << dist(gen) << endl;
    }
    else {
        cout << "Opcion no valida." << endl;
    }

    return 0;
}