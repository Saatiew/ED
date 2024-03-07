#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cout << fixed << setprecision(1);

    int hora;
    float salreceber, salbruto, salminimo, imposto;

    cout << "Entre com seu Salário Mínimo: " << endl;
    cin >> salminimo;

    cout << "Entre com suas Horas Trabalhadas: " << endl;
    cin >> hora;

    salbruto = hora * (salminimo/2);

    imposto = salbruto * 0.03;

    salreceber = salbruto - imposto;

    cout << "-----" << endl;
    cout << "Holerite:" << endl << endl;
    cout << "Horas Trabalhadas: " << hora << endl;
    cout << "Salário bruto: R$" << salbruto << endl;
    cout << "Imposto: R$" << imposto << endl;
    cout << "Salário a receber: R$" << salreceber << endl;
    cout << "-----" << endl;
}
