#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int voto, cand1 = 0, cand2 = 0, nulo = 0, branco = 0, total = 0;
    float percC1, percC2, percN, percB;

    cout << "- Votação -" << endl;
    cout << "1 - Candidato 1" << endl;
    cout << "2 - Candidato 2" << endl;
    cout << "3 - Voto nulo" << endl;
    cout << "4 - Voto branco" << endl;
    cout << "0 - Fim dos votos" << endl;
    cout << "- - - - - -" << endl;

    cin >> voto;

    while(voto != 0){

        switch(voto){

            case 1:

                cand1++;
                total++;

            break;

            case 2:

                cand2++;
                total++;

            break;

            case 3:

                nulo++;
                total++;

            break;

            case 4:

                branco++;
                total++;

            break;
        }

        cout << "- Votação -" << endl;
        cout << "1 - Candidato 1" << endl;
        cout << "2 - Candidato 2" << endl;
        cout << "3 - Voto nulo" << endl;
        cout << "4 - Voto branco" << endl;
        cout << "0 - Fim dos votos" << endl;
        cout << "- - - - - -" << endl;

        cin >> voto;

    }

    percC1 = (100*cand1)/total;

    percC2 = (100*cand2)/total;

    percN = (100*nulo)/total;

    percB = (100*branco)/total;

    cout << "- Resultados -" << endl;
    cout << "Candidato 1 " << percC1 << "%" << endl;
    cout << "Candidato 2 " << percC2 << "%" << endl;
    cout << "Nulo " << percN << "%" << endl;
    cout << "Branco " << percB << "%" << endl;
    cout << "- - - - - -" << endl;

}
