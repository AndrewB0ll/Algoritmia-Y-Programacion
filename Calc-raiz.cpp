// ***Calculo de raiz.***

#include <iostream>    // Importa la biblioteca iostream.
#include <cmath>       // Importa la biblioteca cmath.

// Utiliza el espacio de nombres std.
using namespace std;

// Define una función llamada sqrtNewtonRaphson que toma tres argumentos: N, epsilon y xInitial.
double sqrtNewtonRaphson(double N, double epsilon = 1e-5, double xInitial = 1.0) {
   
    // Inicializa x con el valor de xInitial.
    double x = xInitial;

    // Inicia un bucle infinito.
    while (true) {

        double xNew = 0.5 * (x + N / x);   // Calcula el nuevo valor de x.
        
        // Si la diferencia entre los valores de x y xNew es menor que epsilon, termina el bucle.
        if (fabs(xNew - x) < epsilon) { 
            break;
        }

        x = xNew; // Actualiza el valor de x.
    }

    return x; // Devuelve el valor de x.
}

// Define la función principal del programa.
int main() {
    double N; // Declara una variable llamada N.

    // Pide al usuario que ingrese un número.
    cout << "Ingrese el número para calcular su raíz cuadrada: ";
    cin >> N; // Lee el número ingresado por el usuario y lo guarda en la variable N.

    if (N < 0) { // Si N es negativo, muestra un mensaje de error y termina el programa.
        cout << "El número debe ser no negativo." << endl;
        return 1;
    }

    double epsilon; // Declara una variable llamada epsilon.

    // Pide al usuario que ingrese un umbral de precisión.
    cout << "Ingrese el umbral de precisión (por ejemplo, 1e-5): ";
    cin >> epsilon; // Lee el umbral de precisión ingresado por el usuario y lo guarda en la variable epsilon.

    double xInitial = N / 2.0; // Calcula un valor inicial para x

    // Calcula la raíz cuadrada aproximada de N utilizando la función sqrtNewtonRaphson.
    double sqrtN = sqrtNewtonRaphson(N, epsilon, xInitial);

    // Muestra la raíz cuadrada aproximada al usuario.
    cout << "La raíz cuadrada aproximada de " << N << " es " << sqrtN << endl;

    return 0; // Termina el programa.
}