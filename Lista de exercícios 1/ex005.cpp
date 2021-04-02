#include <iostream>
using namespace std;

int main (){

    /*05) Ler uma medida de temperatura expressa em graus Fahrenheit (número inteiro)
e mostrá-la em graus centígrados (número real). C=((F–32) *(5/9.0)) */
//(0 °C × 9/5) + 32 = 32 °F

    float celsius, fahrenheit;

    cout << "Digte a temperatura em fahrenheit: ";
    cin >> fahrenheit;
    celsius = ((fahrenheit - 32) * 0.555);
    cout << celsius;
    
    return 0;
}

