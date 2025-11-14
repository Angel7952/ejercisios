#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Ingresa un numero (n): ";
    cin >> n;

    // ===========================
    // 1. PATRÓN EN FORMA DE X
    // ===========================
    cout << "\nPatron en forma de X:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (j == i || j == n - i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // ===========================
    // 2. PATRÓN EN FORMA DE Z
    // ===========================
    cout << "\nPatron en forma de Z:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1)       // primera o última fila
                cout << "*";
            else if (j == n - i - 1)        // diagonal inversa
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // ===========================
    // 3. TRIÁNGULO DE FLOYD
    // ===========================
    cout << "\nTriangulo de Floyd:\n";

    int num = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    // ===========================
    // 4. TRIÁNGULO DE PASCAL
    // ===========================
    cout << "\nTriangulo de Pascal:\n";

    int pascal[50][50] = {0}; // matriz pequeña para principiantes

    // Generar Pascal
    for (int i = 0; i < n; i++) {
        pascal[i][0] = 1;
        for (int j = 1; j < i; j++) {
            pascal[i][j] = pascal[i-1][j-1] + pascal[i-1][j];
        }
        pascal[i][i] = 1;
    }

    // Imprimir Pascal
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << pascal[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}