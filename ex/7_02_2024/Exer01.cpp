#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float imc, peso, altura;

    cout << "Entre com seu peso:" << endl;
    cin >> peso;

    cout << "Entre com sua altura:" << endl;
    cin >> altura;

    imc = peso / (altura*altura);

    cout << "\nSeu IMC é: " << imc;

    if (imc < 20){

            cout << "\n ---- \n";
            cout << "Abaixo do Peso";
            cout << "\n ---- \n";

    }else if(imc >= 20 && imc < 25){

            cout << "\n ---- \n";
            cout << "Peso Ideal";
            cout << "\n ---- \n";

            } else {
                    cout << "\n ---- \n";
                    cout << "Acima do Peso";
                    cout << "\n ---- \n";
                   }
}
