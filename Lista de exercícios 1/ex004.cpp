#include <iostream>
using namespace std;

int main(){
    
    /* 04) Ler a medida do lado de um quadrado, expressa em metros. Calcular a área do
quadrado externa ao círculo inscrito nele. */

    float lado, areaq, raioc, areac, subt;
    float const pi = 3.14;

    cout << "Dite o valor de um dos lados do quadrado: ";
    cin >> lado;
    areaq = lado *2;
    raioc = lado / 2;
    areac = pi * (raioc * raioc);
    subt = areaq - areac;
    cout << subt;

    return 0;
}