#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    cout << fixed << setprecision(1);

    float sal, novosal;

    cout << "Entre com seu salário:" << endl;
    cin >> sal;

    if (sal < 1000){

        novosal = sal + sal*0.15;

        cout << "---" << endl;
        cout << "Reajuste de 15%" << endl;
        cout << "Novo salário: R$" << novosal << endl;
        cout << "---" << endl;

    }else{
        if (sal >= 1000 && sal <= 1500){

            novosal = sal + sal*0.10;

            cout << "---" << endl;
            cout << "Reajuste de 10%" << endl;
            cout << "Novo salário: R$" << novosal << endl;
            cout << "---" << endl;

        } else {

            novosal = sal + sal*0.05;

            cout << "---" << endl;
            cout << "Reajuste de 5%" << endl;
            cout << "Novo salário: R$" << novosal << endl;
            cout << "---" << endl;

        }
    }
}
