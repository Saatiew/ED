#include <iostream>
#include <locale>

using namespace std;
/*
3 - Construir um programa para avaliar filmes, pedindo ao
usuário para avaliar diferentes aspectos como enredo, atuação e
efeitos especiais de 0 a 5 cada. Calcule a média das notas avaliadas em
enredo, atuação e efeitos especiais. O programa deve permitir a
avaliação de vários filmes. O programa deve parar quando
usuário não desejar mais continuar.
*/

struct Letterboxd
{
    string nome;
    float enredo;
    float atuacao;
    float efeitos;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");
    Letterboxd RottenTomatoes;

    string continuar;

    cout << "Review de filmes" << endl;
    cout << "______________________" << endl;
    do {
        cout << "Digite o nome do filme: ";
        getline(cin, RottenTomatoes.nome);

        cout << "Avalie o enredo (de 0 a 5): ";
        cin >> RottenTomatoes.enredo;
        if (RottenTomatoes.enredo < 0 || RottenTomatoes.enredo > 5) {
            cout << "Número inválido, tente novamente." << endl;
            cin >> RottenTomatoes.enredo;
            cin.ignore();
        }

        cout << "Avalie a atuação (de 0 a 5): ";
        cin >> RottenTomatoes.atuacao;
        if (RottenTomatoes.atuacao < 0 || RottenTomatoes.atuacao > 5) {
            cout << "Número inválido, tente novamente." << endl;
            cin >> RottenTomatoes.atuacao;
            cin.ignore();
        }

        cout << "Avalie os efeitos (de 0 a 5): ";
        cin >> RottenTomatoes.efeitos;
        if (RottenTomatoes.efeitos < 0 || RottenTomatoes.efeitos > 5) {
            cout << "Número inválido, tente novamente." << endl;
            cin >> RottenTomatoes.efeitos;
            cin.ignore();
        }

        float media = (RottenTomatoes.enredo + RottenTomatoes.atuacao + RottenTomatoes.efeitos) / 3;
        cout << "Média das avaliações: " << media << endl;

        cin.ignore();

        cout << "Deseja avaliar outro filme? (S/N): ";
        getline(cin, continuar);
    } while (continuar == "s" || continuar == "S");

    return 0;
}

