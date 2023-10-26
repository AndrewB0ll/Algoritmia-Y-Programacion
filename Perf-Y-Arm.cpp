// ***Número Perfecto y Número Armstrong en un rango.***

//Incluir biblioteca.
#include <iostream>
#include <cmath>

using namespace std;

bool es_perfecto(int valor) {
    int acumulado = 1;
    for (int i = 2; i < valor; ++i) {
        acumulado += ((valor % i) == 0 ? i : 0);
    }
    return valor == acumulado;
}

bool es_armstrong(int valor) {
    int suma = 0;
    int temp = valor;
    int digitos = floor(log10(valor)) + 1;
    while (temp > 0) {
        int digito = temp % 10;
        suma += pow(digito, digitos);
        temp /= 10;
    }
    return suma == valor;
}

int main() {
    int inicio, fin;
    char resp;
    do {
        cout << "Ingrese el inicio del rango: ";
        cin >> inicio;
        cout << "Ingrese el fin del rango: ";
        cin >> fin;
        cout << "Los numeros perfectos en el rango [" << inicio << ", " << fin << "] son: ";
        for (int i = inicio; i <= fin; ++i) {
            if (es_perfecto(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
        cout << "Los numeros de Armstrong en el rango [" << inicio << ", " << fin << "] son: ";
        for (int i = inicio; i <= fin; ++i) {
            if (es_armstrong(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
        cout << "Desea ejecutar el programa de nuevo? s/S para si, n/N para no: ";
        cin >> resp;
    } while (resp == 's' || resp == 'S');
    return 0;
}