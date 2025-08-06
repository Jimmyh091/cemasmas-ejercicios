#include <iostream>

int main(){
    double op1;
    double op2;
    std::string operador;

    std::cout << "Introduce el primer numero";
    std::cin >> op1;

    std::cout << "Introduce el segundo numero";
    std::cin >> op2;

    std::cout << "Introduce el operador";
    std::cin >> operador;

    if (operador == "+")
    {
        std::cout << "Resultado: " << (op1 + op2);
    }
    else if (operador == "-")
    {
        std::cout << "Resultado: " << (op1 - op2);
    }
    else if (operador == "*")
    {
        std::cout << "Resultado: " << (double)(op1 * op2);
    }
    else if (operador == "/")
    {
        std::cout << "Resultado: " << (double)(op1 / op2);
    }
    else
    {
        std::cout << "Operador incorrecto";
    }

    return 0;
}