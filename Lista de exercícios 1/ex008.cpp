#include <iostream>
using namespace std;

int main (){
    
    /*  08) Ler	 uma	medida	 de	 tempo	 dada	 em	 segundos	 e	 escrever	 esta	mesma	medida	
expressa	em	horas,	minutos	e	segundos,	no	formato	H:M:S.	Por	exemplo:	se	a	medida	
for	5000	segundos,	teremos:	1:23:20.  */

    int numero, horas, minutos, segundos;
    cout << "Digite um valor de tempo em segundos: ";
    cin >> numero;

    horas = numero / 3600;
    minutos = numero % 3600;
    segundos = minutos % 60;
    minutos = minutos / 60;

    cout << "Esse valor de segundos equivale a: " << horas <<":"<<minutos << ":" << segundos <<".";

    return 0;
}