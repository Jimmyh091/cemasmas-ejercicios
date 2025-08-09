#include <iostream>

int main(){
    
    int num1;
    int num2;
    int num3;

    std::cout << "Introduce el primer numero\n>";
    std::cin >> num1;

    std::cout << "Introduce el segnudo numero\n>";
    std::cin >> num2;

    std::cout << "Introduce el tercer numero\n>";
    std::cin >> num3;

    bool mayornum1 = num1 > num2;
    bool mayornum2 = num2 > num3;
    bool mayornum3 = num3 > num1;

    if (mayornum1) 
        std::cout << "\nEl primer numero es mayor que el segundo";        
    else
        std::cout << "\nEl primer numero es menor que el segundo";
    

    if (mayornum2) 
        std::cout << ", el segundo numero es mayor que el tercero";    
    else    
        std::cout << ", el segundo numero es menor que el tercero";
    
    if (mayornum3) 
        std::cout << " y el tercero es mayor que el primero.";
    else
        std::cout << " y el tercero es menor que el primero.";
}