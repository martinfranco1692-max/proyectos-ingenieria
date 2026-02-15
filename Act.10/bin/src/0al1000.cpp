
#include <iostream>
#include <limits>
#include <string>

using namespace std;

bool entradaInvalida(int num) { 
  if (cin.fail() || num < 0){ 
 cin.clear();
cin.ignore(numeric_limits<streamsize>::max(), '\n');
// cout << "Error: Por favor, ingresa un numero valido." << endl; 
  return true; // Sí, la entrada es inválida 
 }
 
return false; // No, la entrada es correcta

}

int main() {
    int numero = 0;
    int contador_3 = 0;
    int contador_5 = 0;
    long long suma_total = 0; // Usamos long long para evitar desbordamiento

    // --- Entrada de datos y Validación ---
    while (true) {
        cout << "Ingrese un número entero entre 0 y 1000: ";
        if (esEntradaValida(numero)) {
            break; // Salir del bucle si la entrada es correcta
        } else {
            cout << "Error: Entrada inválida o fuera de rango." << endl;
        }
    }

    // --- Procesamiento usando for tradicional ---
    for (int i = 1; i <= numero; i++) {
        // Verificar múltiplos de 3
        if (i % 3 == 0) {
            contador_3++;
            suma_total += i;
        }
        
        // Verificar múltiplos de 5
        if (i % 5 == 0) {
            contador_5++;
            suma_total += i;
        }
    }

    // --- Salida de resultados ---
    cout << "\n------------------------------" << endl;
    cout << "Resultados para el número: " << numero << endl;
    cout << "Cantidad de múltiplos de 3: " << contador_3 << endl;
    cout << "Cantidad de múltiplos de 5: " << contador_5 << endl;
    cout << "Sumatoria total de los múltiplos: " << suma_total << endl;
    cout << "------------------------------" << endl;

    return 0;
}