#include <iostream>
using namespace std;

int main (){

    //07) Ler uma medida de arco expressa em radianos e calcular e escreve-la em graus.
    float radiano;
    float const pi = 3.14;

    cout << "Digite um valor em radiano: ";
    cin >> radiano;

    radiano = (radiano * 180) / pi;
    cout << radiano;

    return 0;
}