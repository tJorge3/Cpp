#include <iostream>
using namespace std;

int main()
{

    //01) Ler um número inteiro e mostrar o seu sucessor e o seu antecessor.
    int x;
    cout << "Digite um numero inteiro e sera mostrado o seu sucessor e antecessor: ";
    cin >> x;
    cout << "Voce digitou " << x << endl;
    cout << "O seu sucessor e: " << (x + 1) << endl;
    cout << "O seu antecessor e:" << (x - 1) << endl;

    return 0;

}