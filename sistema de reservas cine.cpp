#include <iostream>
using namespace std;

int main() {
    int opcionPelicula;
    int entradas;
    int precio = 0;

    cout << "=== SISTEMA DE RESERVA DE CINE ===\n\n";

    cout << "Peliculas disponibles:\n";
    cout << "1. Avengers: Endgame ( $12 por entrada )\n";
    cout << "2. Mario Bros ( $10 por entrada )\n";
    cout << "3. El Conjuro ( $9 por entrada )\n\n";

    cout << "Selecciona una pelicula (1-3): ";
    cin >> opcionPelicula;

    // Determinar precio por pelicula
    switch (opcionPelicula) {
        case 1:
            precio = 12;
            break;
        case 2:
            precio = 10;
            break;
        case 3:
            precio = 9;
            break;
        default:
            cout << "Opcion no valida. Saliendo...\n";
            return 0;
    }

    cout << "¿Cuantas entradas deseas comprar? ";
    cin >> entradas;

    if (entradas <= 0) {
        cout << "Cantidad no valida.\n";
        return 0;
    }