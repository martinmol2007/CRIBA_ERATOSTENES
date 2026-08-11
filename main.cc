#include <iostream>
#include <vector>
#include <string>

using namespace std;


/**
 * @brief Rellena el vector con todos los numeros consecutivos empezando por el 0 hasta el numero "num"
 * 
 * @param v Vector a rellenar
 * @param num Numero maximo
 */
void rellenar_vector (vector<int>& v, int num) {
    for(int i = 0; i < num+1; i++) {
        v[i] = i;
    }

    // El 0 y el 1 no son primos
    v[0] = 0;
    v[1] = 0;

    return;
}


/**
 * @brief Consigue los numeros primos dado un vector
 * 
 * @param v Vector con todos los numeros consecutivos
 * @param num Numero limite
 * @return vector<int> Vector resultante
 */
vector<int> conseguir_primos (vector<int>& v, int num) {
    // Crea el vector resultado
    vector<int> res;

    // Comprueba si son primos
    for(int i = 2; i*i <= num; i++) {  
        if(v[i] != 0) {
            // Pon a 0 todos sus multiples
            for(int j = i * i; j <= num; j += i) {
                v[j] = 0;
            }
        }
    }

    // Añade todo los primos que quedan
    for(int i = 2; i <= num; i++) {
        if(v[i] != 0) res.push_back(v[i]);
    }

    return res;
}

int main() {

    // Menu inicial

    cout << "Bienvenido a la Criba de Eratostenes!" << endl;
    cout << "Introduce un numero aleatorio (mas grande que 1), y veremos cuantos primos hay: ";

    // Consigue el numero para saber cuantos primos hay

    bool correcto = false;
    int num;

    while(not correcto) {
        cin >> num;
        if(num > 1) {
            correcto = true;
        } else {
            cout << "Error, introduce un numero aleatorio (mas grande que 1), y veremos cuantos primos hay: ";
        }
    }

    // Vector de tamaño num+1 (indices 0..num) y asigna todos los numeros posibles
    vector<int> vec(num + 1);
    rellenar_vector(vec, num);

    // Consigue los primos
    vector<int> res = conseguir_primos(vec, num);

    // Menu de salida
    cout << endl;
 
    cout << "Los numeros primos son: " << endl;

    for(int i = 0; i < res.size(); i++) {
        if(i > 0) cout << " ";
        cout << res[i];
    }

    cout << endl;

    return 0;
}