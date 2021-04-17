#include <iostream>
using namespace std;

int main(){

    //18) Informar um preço de um produto e calcular novo preço com desconto de 9%.

    int preco, porcentagem, precoatt, aux; //preco = preço, porcentagem = porcentagem de aumento, preco att= preço atualizado, aux = variavel auxiliar

    cout << "Digite o preco do produto, por favor: ";
    cin >> preco;
    cout << "Digite a porcentagem do salario que sera aumentado ou diminuido: ";
    cin >> porcentagem;
    
    aux = (porcentagem * preco) / 100;
    precoatt = aux + preco;

    cout << "O valor do produto atualizado " << preco << " com aumento de " << porcentagem << " resultou em: " << precoatt << endl;

    return 0;
}