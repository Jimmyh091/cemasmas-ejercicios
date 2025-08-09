#include <iostream>

int main(){

    using std::cout;

    int ints[] = {1, 2, 3};

    for (int pos = 1; pos < std::size(ints); pos++) {

        int posAux = pos;

        while (ints[posAux] < ints[posAux - 1] || posAux == 0)
        {

            int aux = ints[posAux - 1];
            ints[posAux - 1] = ints[posAux];
            ints[posAux] = aux;

            posAux--;
        }
    }
    
    cout << "a";

    for (int a : ints) {
        cout << a << "\n";
    }

    return 0;
}