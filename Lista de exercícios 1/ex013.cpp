#include <iostream>
#include <string>
using namespace std;

int main (){
    //13)	Ler	nome,	endereço,	telefone	e	imprimir.

    string nome, endereco, telefone, validar;
    do {
    cout <<"Por favor, digite o seu nome: ";
    cin >> nome;
    cout <<"Por favor digite o seu endereco (No formato Rua - Bairro - Cidade): ";
    cin >> endereco;
    cout <<"Por favor digite o seu telefone: ";
    cin >> telefone;

    cout <<nome <<"\n"<< endereco <<"\n" <<telefone << endl;
    cout <<"Digite 'Sim' ou 'Nao'" <<"\n";
    cout <<"Os dados estao corretos?";
    cin >> validar;
    }
    while 
        (if (validar == "Nao") {
        cout <<"Por favor, digite o seu nome: ";
        cin >> nome;
        cout <<"Por favor digite o seu endereco (No formato Rua - Bairro - Cidade): ";
        cin >> endereco;
        cout <<"Por favor digite o seu telefone: ";
        cin >> telefone;
        
    }
    
    else if ((validar != "Sim") && (validar != "Nao")) {
        cout <<"Resposta invalida";
        
    }

    return 0;
}