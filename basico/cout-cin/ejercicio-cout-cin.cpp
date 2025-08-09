#include <iostream>

int main(){
    std::string nombre;
    std::cout << "Bienvenido, cual es su nombre?\n";
    std::cin >> nombre;
    
    int edad;
    std::cout << "Cuantos anos tiene?\n";
    std::cin >> edad;

    float altura;
    std::cout << "Cuanto mide? (en metros)\n";
    std::cin >> altura;

    std::cout << "Usted se llama " << nombre << ", tiene " << edad << " anos y mide " << altura << " metros";
}