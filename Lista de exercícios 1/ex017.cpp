#include <iostream>
using namespace std;

int main(){

    //17) Informar três números inteiros e imprimir a média.

    int n1, n2, n3;
    float media;

    cout << "Digite o prumero numero inteiro: " << endl;
    cin >> n1;

    cout << "Digite o segundo numero inteiro: " << endl;
    cin >> n2;

    cout << "Digite o terceiro numero inteiro: " << endl;
    cin >> n3;

    media = (n1 + n2 + n3) / 3;

    cout << "A media desses tres numeros e: " << media << endl;

    return 0;
}