/*              Número Fibonacci.

#   Explicacion de los parametros:

~>Entrada: n

~>Salida: Fibonacci(n) 

~>Idea iterativa: valores iniciales de la serie de fibonacci 0 , 1 y la suma iterativa
  n-1 veces de los valores de fibonacci n-1 y n-2. 

~>Estados: a, b, i
a = f(n-1)
b = f(n-2) 

~>Estado inicial: (b = 0),(a = 1),(i = 1)

~>Estado final: (a = F(n)), (b = F(n - 1)), (i = n)

~>Transformación de estados: (a, b, i) => (a', b', i')
b' = a + b
a' = b
i' = i + 1


*************************************************************************************************/

#include <iostream>

using namespace std;

int fibonacci(int n) {
    // Estado Inicial: (0, 1, 1)
    int a = 0, b = 1, i = 1;
    if (n <=1) return n;
    // Idea Iterativa
    while (i < n) {
        
        // Transformación de Estados: (a, b, i) -> (a', b', i')
        int temp = b;
        b = a + b;
        a = temp;
        i++;
    }

    // Estado Final: (a, b, n)
    return b;
}

int main() {
    int n;
    // Solicita al usuario que ingrese el índice del número de Fibonacci que desea calcular.
    cout << "Ingrese el índice del número de Fibonacci que desea calcular: "; 
    cin >> n; // Lee el índice ingresado por el usuario.

    if (n < 0) { // Verifica si el índice es negativo.
        // Muestra un mensaje de error si el índice es negativo.
        cout << "El índice debe ser no negativo." << endl;
        return 1; // Devuelve un código de error.
    }

    // Calcula el número de Fibonacci correspondiente al índice ingresado por el usuario.
    int result = fibonacci(n);
    cout << "El número de Fibonacci en el índice " << n << " es " << result << endl; // Muestra el resultado.

    return 0;
}


