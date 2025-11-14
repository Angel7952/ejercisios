#include <iostream>
#include <cstdlib>  // Para rand() y srand()
#include <ctime>    // Para time()

using namespace std;

int main() {
    // Inicializamos la semilla aleatoria usando el tiempo actual
    srand(time(0));

    // Generamos un número aleatorio entre 1 y 6
    int dado = rand() % 6 + 1;

    // Mostramos el resultado
    cout << "Has sacado un: " << dado << endl;

    return 0;
}