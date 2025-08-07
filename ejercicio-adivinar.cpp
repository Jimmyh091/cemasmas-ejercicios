#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){

    std::srand(std::time(0));
    
    int solucion = std::rand() % 100 + 1;
    int intentos = 0;
    int respuesta;
    bool correcto = false;

    std::cout << "Bienvenido, debe adivinar el numero del 1 al 100m, cual es su eleccion?\n>";

    
    do {

        std::cin >> respuesta;
        intentos++;

        if (respuesta < solucion)        
            std::cout << "\nIncorrecto, el numero es mayor.\n";

        else if (respuesta > solucion)
            std::cout << "\nIncorrecto, el numero es menor.\n";
        else
            break;

        
    } while (true);

    std::cout << "Felicidades! Has acertado el numero en " << intentos << " intentos.";

    return 0;
}