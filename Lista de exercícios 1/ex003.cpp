#include <iostream>
#include <math.h>
using namespace std;

int main(){

    /*03) Ler as medidas das duas dimensões de um retângulo expressas em “cm” e calcular
e escrever as medidas do perímetro, da diagonal e da área dele.*/

    float h; //altura
    float b; //base
    
    cout << "Digite o valor da altura do retangulo: " << "\n";
    cin >> h;
    cout << "Digite o valor da base do retangulo: " << endl;
    cin >> b;
    
    // Perímetro = Soma de todos os lados = x
    float x;
    x = (h * 2) + (b * 2);
    
    // Área = Multiplicação dos lados
    float y;
    y = h * b;

    // Diagonal: Raiz quadrada de (h² + b²)
    float q, w;
    q = (h * h) + (b * b);
    q = sqrt (q);

    cout << "O valor do perimetro: " << x << "\n";
    cout << "O valor da area: " << y << "\n";
    cout << "O valor da diagonal: " << q << endl;

    return 0;
}