#include <iostream>
using namespace std;

int main (){

    /*15) Fazer um programa que imprima a média aritmética dos números 8, 9 e 7. A
media dos números 4, 5 e 6. A soma das duas médias. A media das medias.*/
    
   int n1, n2, n3, n4, n5, n6, media1, media2, somamedias;

    cout << "Esse programa calcula a media de 3 valores" << endl;
    cout << "Por favor, digite um valor:"; 
    cin >> n1;
    cout << "Por favor, digite um valor:"; 
    cin >> n2;
    cout << "Por favor, digite um valor:"; 
    cin >> n3;
    media1 = (n1 + n2 + n3) / 3;
    cout << "A soma dos valores " << n1 <<", " << n2 << ", " << n3 << " e = " << media1 << endl;
    cout << "Por favor, digite um valor:"; 
    cin >> n4;
    cout << "Por favor, digite um valor:"; 
    cin >> n5;
    cout << "Por favor, digite um valor:"; 
    cin >> n6;
    media2 = (n4 + n5 + n6) / 3;
    cout << "A soma dos valores " << n4 <<", " << n5 << ", " << n6 << " e = " << media2 << endl;
    somamedias = media1 + media2;
    cout << "A soma das medias e: " <<somamedias;


    return 0;
}