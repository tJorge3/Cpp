#include <iostream>
using namespace std;

int main(){
    
    /* 02) Ler os três algarismos de um número (das unidades, das dezenas e das centenas,
nesta ordem) e informar qual é o dobro desse número. */

    int num, centena, dezena, unidade, dobro;
    printf ("Digite um valor inteiro de tres digitos: ");
    scanf("%i", &num);
    
    dobro = num * 2;
    centena = num/100;
    dezena = num%100;
    unidade = dezena%10;
    dezena = dezena/10;
    
    cout << "O numero digitado foi: " << num << "\n"
    << "Sua centena e: " << centena << "\n" 
    << "Sua dezena e: " << dezena << "\n" 
    << "Sua unidade e: "<< unidade << "\n"
    << "E o dobro do numero digitado e: " << dobro;

    return 0;
}