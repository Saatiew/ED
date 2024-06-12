#include <iostream>
#include <stack>
#include <locale>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    stack <int> pilha;
    int num, tam;

    do{

        cout << "\n--------------------------\n";
        cout << "Digite um número para acessar a pilha, ou 0 para finalizar o programa\n";
        cout << "--------------------------\n\n";

        cin >> num;

        switch(num){

            case 0:

                cout << "\n----- Programa Finalizado! -----\n";

            break;

            default:

                pilha.push(num);

            break;

        }


    }while(num != 0);

    cout << "\n--- Números na ordem inversa ---\n";

    tam = pilha.size();

    while(tam > 0){

        cout << pilha.top() << " - ";
        pilha.pop();
    }

    cout << "--------------------------\n\n";

}
