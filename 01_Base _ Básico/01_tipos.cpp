#include <iostream>
#include <complex>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <tuple>
using namespace std;

int main() {
    // Tipo int
    cout << "Int:" << endl;
    int num = 3;
    cout << "Tipo: int" << endl;
    cout << "Valor: " << num << endl;

    // Tipo float
    cout << "\nFloat:" << endl;
    float num_float = 3.5f;
    cout << "Tipo: float" << endl;
    cout << "Valor: " << num_float << endl;

    // Tipo complejo
    cout << "\nComplejo:" << endl;
    complex<double> num_complejo(3.5, 1.0);
    cout << "Tipo: complex<double>" << endl;
    cout << "Valor: " << num_complejo << endl;

    // Tipo booleano
    cout << "\nBooleano:" << endl;
    bool num_booleano = true;
    cout << "Tipo: bool" << endl;
    cout << "Valor: " << num_booleano << endl;

    // Tipo string
    cout << "\nString:" << endl;
    string num_str = "3";
    cout << "Tipo: string" << endl;
    cout << "Valor: " << num_str << endl;

    // Tipo lista (vector en C++)
    cout << "\nLista:" << endl;
    vector<int> num_lista = {1, 2, 3};
    cout << "Tipo: vector<int>" << endl;
    cout << "Valor: ";
    for (int n : num_lista) {
        cout << n << " ";
    }
    cout << endl;

    // Tipo diccionario (map en C++)
    cout << "\nDiccionario:" << endl;
    map<string, int> num_diccionario = {{"uno", 1}, {"dos", 2}, {"tres", 3}};
    cout << "Tipo: map<string, int>" << endl;
    cout << "Valor: ";
    for (const auto& pair : num_diccionario) {
        cout << "{" << pair.first << ": " << pair.second << "} ";
    }
    cout << endl;

    // Tipo set
    cout << "\nSet:" << endl;
    set<int> num_set = {1, 2, 3};
    cout << "Tipo: set<int>" << endl;
    cout << "Valor: ";
    for (int n : num_set) {
        cout << n << " ";
    }
    cout << endl;

    // Tipo tuple
    cout << "\nTupla:" << endl;
    tuple<int, float, string> num_tupla = make_tuple(1, 2.5f, "hola");
    cout << "Tipo: tuple<int, float, string>" << endl;
    cout << "Valor: (" << get<0>(num_tupla) << ", " << get<1>(num_tupla) << ", " << get<2>(num_tupla) << ")" << endl;

    return 0;
}
