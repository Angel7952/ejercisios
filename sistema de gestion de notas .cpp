#include <iostream>
using namespace std;

int main() {
    const int MAX = 50; // Máximo de estudiantes
    string nombres[MAX];
    float n1[MAX], n2[MAX], n3[MAX], promedio[MAX];
    int cantidad;

    cout << "=== SISTEMA DE GESTION DE CALIFICACIONES ===\n\n";

    cout << "¿Cuantos estudiantes desea registrar? (max 50): ";
    cin >> cantidad;

    if (cantidad <= 0 || cantidad > MAX) {
        cout << "Cantidad no valida.\n";
        return 0;
    }

    // Ingreso de datos
    for (int i = 0; i < cantidad; i++) {
        cout << "\nEstudiante #" << (i + 1) << endl;

        cout << "Nombre: ";
        cin >> nombres[i];

        cout << "Nota 1: ";
        cin >> n1[i];

        cout << "Nota 2: ";
        cin >> n2[i];

        cout << "Nota 3: ";
        cin >> n3[i];

        promedio[i] = (n1[i] + n2[i] + n3[i]) / 3;
    }

    // Mostrar reporte
    cout << "\n\n=== REPORTE DE CALIFICACIONES ===\n";

    for (int i = 0; i < cantidad; i++) {
        cout << "\nEstudiante: " << nombres[i] << endl;
        cout << "Notas: " << n1[i] << ", " << n2[i] << ", " << n3[i] << endl;
        cout << "Promedio: " << promedio[i] << endl;

        if (promedio[i] >= 3.0)
            cout << "Estado: APROBADO\n";
        else
            cout << "Estado: REPROBADO\n";
    }

    return 0;
}