#include <iostream>
#include <math.h>

using namespace std;

 int printY(unsigned short int x) 
{
    unsigned short int y = 2*x;
    cout << "Dentro da funcao " << x << "\n";

    return y;
}

 int main(){

    unsigned short int aux;
    unsigned short int a;
    cout << "Digite o valor de A:";
    cin >> a;
    aux = printY(a);
    cout << "Fora da funcao "<< aux;
    //cout << sizeof (a);

    return 0;
}

do
{
    /* code */
} while (/* condition */);

