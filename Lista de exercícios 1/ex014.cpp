#include <iostream>
using namespace std;

int main () {

    /*14) Ler nome, sexo e idade. Se sexo for feminino e idade menor que 25. Imprimir o
nome da pessoa e a palavra ACEITA. Caso contrario imprimir NAO ACEITA.*/

    string nome, sexo;
    int idade;

    cout << "Qual e o seu nome? ";
    cin >> nome;
    cout << "Qual e a sua idade?";
    cin >> idade;
    cout << "Qual e o seu sexo? Digite M para masculino e F para feminino: ";
    cin >> sexo;
    if ((sexo == "f") && (idade < 25)) {
        cout << "Aceita";
    }
    else
    {
        cout << "Infelizmente tu nao pode ser aceito(a)";
    }

    return 0;
}