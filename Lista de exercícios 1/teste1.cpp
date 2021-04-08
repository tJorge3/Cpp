#include <iostream>
#include <ctype.h>  //bibilioteca da função tolower, toupper e islower
#include <stdio.h> // bibilioteca para printf
using namespace std;

int main(void) //void retorma valor vazio

{
int i=0;
/*char é usada como armazenamento podendo ser numero, palavra ou caracter
str é uma variavel do tipo refererência, ela contem um endereço objeto */

char str[]="Ola";
char c;

/* while ele testa a condição, se for falsa ela pula todos os comandos
do bloco subordinado a ele e executa os comandos dados apos ele */

while (str[i])
{
c=str[i];

/* if estabelece que execute um determinado código de acordo com uma linha
de comandos estabelecida
*/
if (islower(c)) //o islower verifica se a letra é minuscula

{

cout << "Letra: " << c <<" minuscula"<<endl;

printf("%c", toupper(str[i])); //toupper imprime maiusculo

cout <<endl;
}

/*else é uma estrutura dentro if que funciona como um
comando de comparação, e retorna se é verdaderio*/

else{
cout << "Letra: " << c <<" maiuscula"<<endl;
printf("%c",tolower(str[i])); //transforma a letra em minuscula
cout <<endl;
}
i++; // determina que o processamento da função tenha continuidade
}

return 0;

}