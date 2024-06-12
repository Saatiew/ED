#include <iostream>
#include <locale>

using namespace std;
//usando typedef

typedef enum {DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO} WeekDay;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    WeekDay today;
    int day;

    cout << "Digite um n�mero: ";
    cin >> day;

    switch(day)
    {
    case 1:
        today = DOMINGO;
        break;
    case 2:
        today = SEGUNDA;
        break;
    case 3:
        today = TERCA;
        break;
    case 4:
        today = QUARTA;
        break;
    case 5:
        today = QUINTA;
        break;
    case 6:
        today = SEXTA;
        break;
    case 7:
        today = SABADO;
        break;
    default:
        cout << "N�mero inv�lido";
        return 1;

    }
    cout << "O dia da semana escolhido �: ";

    switch(today)
    {
        case DOMINGO:
        cout << "Domingo.";
        break;
    case SEGUNDA:
        cout << "Segunda.";
        break;
    case TERCA:
        cout << "Ter�a.";
        break;
    case QUARTA:
        cout << "Quarta.";
        break;
    case QUINTA:
        cout << "Quinta.";
        break;
    case SEXTA:
        cout << "Sexta.";
        break;
    case SABADO:
        cout << "S�bado.";
        break;
    }

    return 0;
}
