#include <iostream>
#include <locale>

using namespace std;

/* 7. Faça um programa em C++ que crie um vetor de 10 inteiros, coloque
peça valores ao usuário e depois imprima todos os seus conteúdos na
ordem normal e depois inversa. A impressão dos conteúdos deverá ser
feita usando ponteiro. :
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");


   int vt[10];
   int* ptr = &vt[0];

   for(int i = 0; i < 10; i++)
    {
        cout << "Digite o número: ";
        cin >> vt[i];
    }
    cout << "Valores em ordem" << endl;
    cout << "---------------------" << endl;

    for(int i = 0; i < 10; i++)
    {
        cout<< *ptr << endl;
        ptr++;

    }

    cout << "---------------------" << endl;
    cout << "Valores invertidos" << endl;
    cout << "---------------------" << endl;

    ptr = &vt[9];

    for(int i = 10; i > 0; i--)
    {
        cout<< *ptr << endl;
        ptr--;

    }

  return 0;


}
