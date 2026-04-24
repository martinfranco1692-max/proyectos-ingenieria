#include <iostream>
#include <string>
#include <algorithm>
#include <cmath>

using namespace std;

// --- Funciones de Conversión ---

// Convierte cualquier base a Decimal (Base 10)
long long A_Decimal(string num, int baseOrigen) {
    char hexChars[] = "0123456789ABCDEF";
    long long decimal = 0;
    int power = 0;
    
    // Iterar de derecha a izquierda
    for (int i = num.length() - 1; i >= 0; i--) {
        char c = toupper(num[i]);
        int digit = 0;
        
        // Obtener valor numérico del dígito
        if (c >= '0' && c <= '9') digit = c - '0';
        else if (c >= 'A' && c <= 'F') digit = c - 'A' + 10;
        else return -1; // Carácter inválido
        
        if (digit >= baseOrigen) return -1; // Dígito inválido para la base
        
        decimal += digit * pow(baseOrigen, power++);
    }
    return decimal;
}

// Convierte Decimal (Base 10) a cualquier base
string DE_Decimal(long long decimal, int baseDestino) {
    if (decimal == 0) return "0";
    string hexChars = "0123456789ABCDEF";
    string result = "";
    
    while (decimal > 0) {
        result += hexChars[decimal % baseDestino];
        decimal /= baseDestino;
    }
    reverse(result.begin(), result.end());
    return result;
}

// --- Función Principal ---
int main() {
    string numeroInput;
    int baseOrigen, baseDestino;
    char continuar;

    cout << "--- Conversor Numerico Universal Interactivo ---" << endl;

    do {
        cout << "\nSeleccione base de origen Binario(2),Octal (8),Decimal (10),Hexadecimal (16) ingresa el numero: ";
        cin >> baseOrigen;
        cout << "Ingrese el numero: ";
        cin >> numeroInput;
        cout << "Seleccione base de destino Binario(2),Octal (8),Decimal (10),Hexadecimal (16) ingresa el numero:: ";
        cin >> baseDestino;

        // 1. Validar y convertir a decimal primero (Abstracción)
        long long decimalIntermedio = A_Decimal(numeroInput, baseOrigen);
        
        if (decimalIntermedio == -1) {
            cout << "Error: El numero \"" << numeroInput << "\" no es valido para la base " << baseOrigen << "." << endl;
        } else {
            // 2. Convertir de decimal a base destino
            string resultado = DE_Decimal(decimalIntermedio, baseDestino);
            cout << "Resultado: " << resultado << " (Base " << baseDestino << ")" << endl;
        }

        cout << "\n¿Desea realizar otra conversion? (s/n): ";
        cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    cout << "Programa finalizado. ¡Adios!" << endl;
    return 0;
}

