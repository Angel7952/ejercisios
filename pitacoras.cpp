#include <iostream>
using namespace std;

int main() {
    cout << "=== TERNAS PITAGORICAS ===" << endl;
    cout << "Ternas (a, b, c) que cumplen a^2 + b^2 = c^2" << endl;

    // Recorrer valores de a, b y c desde 1 hasta 50
    for (int a = 1; a <= 50; a++) {
        for (int b = 1; b <= 50; b++) {
            for (int c = 1; c <= 50; c++) {
                if (a*a + b*b == c*c) {
                    cout << "(" << a << ", " << b << ", " << c << ")" << endl;
                }
            }
        }
    }

    return 0;
}