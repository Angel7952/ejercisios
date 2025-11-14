#include <iostream>
#include <cstdlib>  // rand(), srand()
#include <ctime>    // time()

using namespace std;

int main() {
    // Inicializamos la semilla aleatoria
    srand(time(0));

    int jugador;
    int cpu;

    cout << "=== PIEDRA, PAPEL O TIJERA ===" << endl;
    cout << "Elige una opcion:" << endl;
    cout << "1. Piedra" << endl;
    cout << "2. Papel" << endl;
    cout << "3. Tijera" << endl;
    cout << "Tu opcion: ";
    cin >> jugador;

    // Movimiento aleatorio de la computadora
    cpu = rand() % 3 + 1;  // 1 - 3

    cout << "La computadora eligio: ";

    if (cpu == 1) cout << "Piedra" << endl;
    if (cpu == 2) cout << "Papel" << endl;
    if (cpu == 3) cout << "Tijera" << endl;

    cout << endl;

    // Determinar ganador
    if (jugador == cpu) {
        cout << "Empate!" << endl;
    } 
    else if ((jugador == 1 && cpu == 3) ||
             (jugador == 2 && cpu == 1) ||
             (jugador == 3 && cpu == 2)) {
        cout << "Ganaste! :)" << endl;
    } 
    else {
        cout << "Perdiste :(" << endl;
    }

    return 0;
}