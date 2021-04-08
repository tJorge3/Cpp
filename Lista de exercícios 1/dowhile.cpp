#include <iostream>
using namespace std;


 int main ()
 {
 
  cout << " \nHa quantos alunos na sala?" << endl;
  int alunos;
 
  cin>> alunos; //
  for (int lin=1; lin <=alunos; lin++)
{

int col=1;
float total=0.0; /* ponto flutuante da variável está inicializado em
Zero, desta forma não será obtido "lixo" de armazenamento de endereço
 de memoria quando o programa começas a ser executado
 */
cout << endl;
/* o "do" funciona como declaração, ou seja, ele  estabelece uma
 estrutura, da qual, sera testada dentro do while
*/
do{
cout << " A nota do aluno" << lin
<< " \nna prova " << col << " foi? \n ";

float nota; /*  armazena números com ponto flutuante
com precisão simples */

cin >> nota;
total +=nota;

if (col==3) // condicional if
{
cout << lin << "Total: " << total;
total= 0.0;


}

col++; /* pós incremento, ele incrementar o valor do
 indice e retornar o valor já incrementado
*/

}while (col<4); /* o while chama a variável declarada dentro
da condicional if para testar e verificar se a condicional
 é verdadeira ou falsa. o do-while ao contrário dos outros laços,
 garante que a declaração seja executada pelo menos uma vez
 */


}

  return 0;
 
 }