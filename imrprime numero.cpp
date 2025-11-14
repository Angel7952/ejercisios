#include <iostream>
using namespace std;

int main() {
    int N, M;

    cout << "Ingresa el numero de filas (N): ";
    cin >> N;

    cout << "Ingresa el numero de columnas (M): ";
    cin >> M;

    cout << "\nRectangulo hueco:\n";

    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= M; j++) {

            // Imprimir "*" solo en los bordes
            if (i == 1 || i == N || j == 1 || j == M) {
                cout << "*";
            } else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
