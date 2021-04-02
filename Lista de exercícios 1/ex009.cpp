#include <iostream>
using namespace std;

int main(){

    /* 09) Calcule	 e	 mostre	 o	 salário	 bruto	 e	 o	 líquido	 de	 um	 empregado,	 sendo	 dados	
através	do	teclado:	
a)	 o	número	de	horas	trabalhadas	no	mês; 	
b)	 o	valor	do	salário-hora;	
c)	 o	percentual	de	desconto	do	INSS,	sobre	o	salário	bruto.	 

    Desconto do INSS:  até R$ 1.100,00	7,5%
                       de R$ 1.100,01 até R$ 2.203,48	9%
                       de R$ 2.203,49 até R$ 3.305,22	12%
                       de R$ 3.305,23 até R$ 6.433,57	14%       */

    float salario_bruto, salario_hora, horas_mensais, desconto_inss, salario_liquido;
    cout << "Ola. Este programa calcula o valor do salario liquido em base do desconto no INSS sobre o salario bruto. \n";
    cout << "Os descontos do INSS sao referentes ao valor do salario do cliete: \n" << endl; 
    
    cout << "Descontos do INSS: Ate R$1.100,00     7,5% \n";
    cout << "                   De R$1.100,01  ate  R$2.203,48     9% \n";
    cout << "                   De R$2.203,49  ate  R$3.305,22     12% \n";
    cout << "                   De R$3.305,23  ate  R$6.433,57     14% \n" << endl; 
    
    cout << "Quantas horas voce trabalha por mes? ";
    cin >> horas_mensais;
    cout << "Qual o valor do seu salario hora? ";
    cin >> salario_hora;
    
    salario_bruto = horas_mensais * salario_hora; // Calculo do salario bruto

    if (salario_bruto <= 1100) {
        salario_liquido = (salario_bruto * 0.075);
        salario_liquido = salario_bruto - salario_liquido;
        cout << salario_bruto << endl; 
        cout << salario_liquido;
    }
    
    else if ((salario_bruto >= 1100.01) && (salario_bruto <= 2203.48)) {
        salario_liquido = salario_bruto * 0.09;
        salario_liquido = salario_bruto - salario_liquido;
        cout << salario_bruto << endl; 
        cout << salario_liquido;
    }

    else if ((salario_bruto >= 2203.49) && (salario_bruto <= 3305.22)) {
        salario_liquido = salario_bruto * 0.12;
        salario_liquido = salario_bruto - salario_liquido;
        cout << salario_bruto << endl; 
        cout << salario_liquido;
    }

    else if ((salario_bruto >= 3305.23) && (salario_bruto <= 6433.57)) {
        salario_liquido = salario_bruto * 0.14;
        salario_liquido = salario_bruto - salario_liquido;
        cout << salario_bruto << endl; 
        cout << salario_liquido;
    }
    else {
        cout << salario_bruto;
        cout <<"Voce e rico mizera. Para de se preocupar com esse trem!!!";
    }

    
    return 0;
}
