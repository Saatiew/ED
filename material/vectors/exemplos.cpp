/*
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Criando um vetor de inteiros
    vector<int> nuns;

    int pn;

   for(int i = 0; i < 5; i++) // pede para inserir
   {
       cout << "Digite o primeiro numero do vetor: ";
       cin >> pn;
       nuns.push_back(pn);
   }

   cout << "exibindo elementos do vetor: "; //exibindo
   for(int i = 0; i < nuns.size(); i++)
   {
       cout << nuns[i] << " ";
   }
return 0;

}
*/


#include <iostream>
#include <vector>
#include <locale>

using namespace std;



int main()
{
    vector<int> Numb;


    Numb.push_back(1);
    Numb.push_back(2);
    Numb.push_back(3);
    Numb.push_back(4);
    Numb.push_back(5);

    for(int i = 0; i < Numb.size(); i++)
    {
        cout << Numb[i] << " ";
    }

   return 0;

}


























