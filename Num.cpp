//***Algoritmo de Ordenamiento de Numeros.***

//Se incluyen las librerias.
#include <vector>
#include <iostream>

std::vector<int> bubbleSort(std::vector<int> num) {
    int n = num.size();
    for(int i = 0; i < n-1; i++) {     
        for (int j = 0; j < n-i-1; j++) { 
            if (num[j] > num[j+1]) {
                // Intercambiar num[j] y num[j+1]
                int temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    return num;
}

int main() {
    // Crear un vector de enteros.
    std::vector<int> num = {3, 4, 7, 1, 5, 2, 6};

    // Ordenar el vector.
    std::vector<int> num2 = bubbleSort(num);

    // Imprimir el vector ordenado.
    for(const auto &num : num2) {
        std::cout << num << std::endl;
    }

    return 0;
}