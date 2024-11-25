#include <iostream>
#include <thread>

using namespace std;

// Funcion que recorre un bucle y solo imprime los numero impares
void hiloImpares() {
    for (int i = 1; i <= 10; i += 2) {
        cout << "Imparell: " << i << endl;
    }
}

// Funcion que recorre otro bucle, pero solo los pares
void hiloPares() {
    for (int i = 2; i <= 10; i += 2) {
        cout << "Parell: " << i << endl;
    }
}

int main() {
    // Se crean los dos hilos
    thread fil1(hiloImpares);
    thread fil2(hiloPares);

    // Y esperamos a que los dos hilos terminen 
    fil1.join();
    fil2.join();

    return 0;
}
