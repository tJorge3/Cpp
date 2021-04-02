#include <iostream>
using namespace std;

int main(){

    // 06) Ler uma medida de ângulo expressa em graus e calcular e escreve-la em radianos.
    float grau;
    float const pi = 3.14;

    cout << "Digite o valor do angulo: ";
    cin >> grau; 
    grau = (grau * pi) / 180;
    cout << grau;

    return 0;
}
