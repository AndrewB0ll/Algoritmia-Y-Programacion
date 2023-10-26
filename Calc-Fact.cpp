/*          Calculo de numero Factorial.

#Explicacion de los parametros:

~>Entrada: n

~>Salida: n! 

~>Idea iterativa: factorial (n) = 1 * 2 * .... * (n-1)  * n

~>Estados: (facorial de n-1, i, n), donde n > 0

~>Estado inicial: (factorial = 1),(i = 1 ) (n>0)

~>Estado final:  Factorial de n, i=n, n

~>Transformación de estados: (factorial, i,n) -> (factorial',i', n')
                             factorial' = n' * factorial
                             i'= i+1
*******************************************************************************/ 

#include <iostream>
using namespace std;

int main() {
    int n; // Declara una variable entera llamada "n".
    // Declara una variable de tipo "long long" llamada "factorial" e inicializa su valor en 1.
    long long factorial = 1; 
    // Imprime en la pantalla la cadena de caracteres "Ingrese un número entero positivo:".
    cout << "Ingrese un número entero positivo: ";
    //n Lee un número entero desde la entrada estándar y lo almacena en la variable "n".
    cin >> n;
    
    // Inicia un ciclo "for" que se ejecuta desde i=1 hasta i=n, incrementando i en 1 en cada iteración.
    for(int i = 1; i <= n; ++i) { 
        // Multiplica el valor actual de "factorial" por el valor actual de "i" y almacena el resultado en "factorial".
        factorial *= i ; 
        
    }

    // Imprime en la pantalla el resultado del cálculo del factorial
    cout << "El factorial de " << n << " es " << factorial << endl;
    
    return 0; // Indica que el programa ha finalizado correctamente
}



