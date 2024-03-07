#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade, totIdade = 0, opcao, totalOp = 0, otimo = 0, bom = 0, reg = 0, ruim = 0;
    float mediaIdade;

    cout << "Entre com sua idade: " << endl;
    cin >> idade;
    totIdade += idade;



    while(idade >= 0){

        cout << "- Questionário de Opinião -" << endl;
        cout << "1 - Ótimo" << endl;
        cout << "2 - Bom" << endl;
        cout << "3 - Regular" << endl;
        cout << "4 - Ruim" << endl;
        cout << "- - - - - -" << endl;

        cin >> opcao;

        switch(opcao){

            case 1:

                otimo++;
                totalOp++;

            break;

            case 2:

                bom++;
                totalOp++;

            break;

            case 3:

                reg++;
                totalOp++;

            break;

            case 4:

                ruim++;
                totalOp++;

            break;
        }

        cout << "Entre com sua idade: " << endl;
        cin >> idade;
        totIdade += idade;

    }

    cout << "- - - - - -" << endl;
    cout << "- Total votos: " << totalOp << endl;
    cout << "- - - - - -" << endl;

    cout << "- - - - - -" << endl;
    cout << "- Média de idades: " << totIdade / totalOp << endl;
    cout << "- - - - - -" << endl;

    cout << "- Resultados Percentuais -" << endl;
    cout << "Ótimo " << (100*otimo)/totalOp << "%" << endl;
    cout << "Bom " << (100*bom)/totalOp << "%" << endl;
    cout << "Regular " << (100*reg)/totalOp<< "%" << endl;
    cout << "Ruim " << (100*ruim)/totalOp << "%" << endl;
    cout << "- - - - - -" << endl;

}
