#include <iostream>
using namespace std;

int main(){

    //12)	Escrever	seu	nome	na	tela	10	vezes.	Um	nome	por	linha.
    
    char nome_usuario [25];
    cout <<"Digite o seu nome: ";
    cin >> nome_usuario;
    
    for(int n = 0; n < 10; n++){
        cout << nome_usuario << "\n";
    }


    return 0;
}