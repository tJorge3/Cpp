#include <iostream>
using namespace std;

int main(){

    /* 10) Ler	o	tempo	e	a	velocidade	média	de	um	carro	em	uma	viagem.	Sabendo	que	ele	
percorre	12	 km	com	um	litro	de	combustível,	calcular	e	mostrar	quantos	litros	de	
combustível	ele	gastou	na	viagem. */

    float km_distancia, velocidade, horas, tempo, quantidade_litros, minutos;
    int const gasolina = 12;


    cout << "Este programa calcula quanto de gasolina foi gasto na sua viagem. \n";
    cout << "Por favor digite o tempo da viagem em horas e minutos: ";
    cout << "Digite apenas as horas separadamente: ";
    cin >> horas;
    cout << "Digite apenas os minutos separadamente: ";
    cin >> minutos;
    
    cout << "Qual foi a velocidade media do seu veiculo durante a viagem?";
    cin >> velocidade;

    minutos = minutos / 60;
    horas = horas + minutos;

    km_distancia = velocidade * horas; // Calculo para saber a quilometragem da viagem
    
    quantidade_litros = km_distancia / gasolina; // Calculo para achar a media de gasolina

    cout << "A viagem teve um percursso de " <<km_distancia << "km" << " e o carro gastou em media " << quantidade_litros << " litros de gasolina.";


    return 0;
}