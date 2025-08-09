#include <iostream>

int main(){

    std::cout << "Numeros pares:\n\n";

    for (int i = 0; i <= 100; i++){
        if (i % 2 == 0)
            std::cout << i << "\n";
    }
}