#include <iostream>
#include <locale>

using namespace std;

/* 7. Fa�a um programa em C++ que crie um vetor de 10 inteiros, coloque
pe�a valores ao usu�rio e depois imprima todos os seus conte�dos na
ordem normal e depois inversa. A impress�o dos conte�dos dever� ser
feita usando ponteiro. :
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");


   int vt[10];
   int* ptr = &vt[0];

   for(int i = 0; i < 10; i++)
    {
        cout << "Digite o n�mero: ";
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
