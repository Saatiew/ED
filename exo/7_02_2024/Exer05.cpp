#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int cod;
    float pe, pfinal;

    cout << "Insira o preço de etiqueta: " << endl;
    cin >> pe;


    cout << "- Códigos de Pagamento -" << endl;
    cout << "1 - À vista em dinheiro ou cheque, 10% de desconto" << endl;
    cout << "2 - À vista em cartão de crédito, 5% de desconto" << endl;
    cout << "3 - Em 2 vezes, preço de etiqueta" << endl;
    cout << "4 - Em 3 vezes, preço de etiqueta com 10% de juros" << endl;
    cout << "- - - - - -" << endl;

    cin >> cod;

    while(cod != 0){

        switch(cod){

            case 1:

                pfinal = pe - (pe * 0.1);

                cout << "- À vista em dinheiro ou cheque -" << endl;
                cout << "1 Parcela" << endl;
                cout << "Valor final: R$" << pfinal << endl;

            break;

            case 2:

                pfinal = pe - (pe * 0.05);

                cout << "- À vista em cartão de crédito -" << endl;
                cout << "1 Parcela" << endl;
                cout << "Valor final: R$" << pfinal << endl;

            break;

            case 3:

                pfinal = pe;

                cout << "- Em 2 vezes -" << endl;
                cout << "2 Parcelas de: R$" << pfinal/2 << endl;
                cout << "Valor final: R$" << pfinal << endl;

            break;

            case 4:

                pfinal = pe + (pe * 0.1);

                cout << "- Em 3 vezes -" << endl;
                cout << "3 Parcelas de: R$" << pfinal/3 << endl;
                cout << "Valor final: R$" << pfinal << endl;

            break;
        }

        cout << "Insira o preço de etiqueta: " << endl;
        cin >> pe;


        cout << "- Códigos de Pagamento -" << endl;
        cout << "1 - À vista em dinheiro ou cheque, 10% de desconto" << endl;
        cout << "2 - À vista em cartão de crédito, 5% de desconto" << endl;
        cout << "3 - Em 2 vezes, preço de etiqueta" << endl;
        cout << "4 - Em 3 vezes, preço de etiqueta com 10% de juros" << endl;
        cout << "- - - - - -" << endl;

        cin >> cod;

    }

    cout << "- SERVIÇO FINALIZADO -";

}
