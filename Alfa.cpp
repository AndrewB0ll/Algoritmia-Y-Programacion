//***Algoritmo de Ordenamiento de Palabras.***

//Se incluyen las librerias.
#include <vector>
#include <iostream>
#include <string>

void bubbleSort(std::vector<std::string>& words) {
    int n = words.size();
    for(int i = 0; i < n-1; i++) {     
        for (int j = 0; j < n-i-1; j++) { 
            if (words[j] > words[j+1]) {
                // Intercambiar words[j] y words[j+1]
                std::string temp = words[j];
                words[j] = words[j+1];
                words[j+1] = temp;
            }
        }
    }
}

int main() {
    // Crear un vector de palabras.
    std::vector<std::string> palabas = {"gato", "perro", "elefante", "jirafa", "leon"};

    // Ordenar el vector.
    bubbleSort(palabas);

    // Imprimir el vector ordenado.
    for(const auto &word : palabas) {
        std::cout << word << std::endl;
    }

    return 0;
}
