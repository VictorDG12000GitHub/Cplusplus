#include <iostream>
#include <string>
using namespace std;

int main() {
    //Snake case.
    string mi_variable_string = "String";
    cout << mi_variable_string << endl;

    //Concatenación.
    cout << mi_variable_string << " " << 5 << " hola" << endl;

    //ToString, conversión de entero a string.
    int num = 5;
    string int_to_str = to_string(num);
    cout << "Tipo: string (resultado de to_string)" << endl;
    cout << "Valor: " << int_to_str << endl;

    //Declaración múltiple.
    int a = 1, b = 2, c = 3;
    string d = "d";
    cout << "Valores de variables múltiples: a=" << a << ", b=" << b << ", c=" << c << ", d=" << d << endl;

    return 0;
}
