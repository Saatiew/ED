#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade;

    cout << "Entre com sua idade:" << endl;
    cin >> idade;

    cout << "\n\n Classe: " << endl;

    if (idade >= 5 && idade <= 7){

        cout << "\n ---- \n";
        cout << " Infantil A";
        cout << "\n ---- \n";

    }else if(idade >= 8 && idade <= 10){

            cout << "\n ---- \n";
            cout << " Infantil B";
            cout << "\n ---- \n";

            } else if(idade >= 11 && idade <= 13){

                cout << "\n ---- \n";
                cout << " Juvenil A";
                cout << "\n ---- \n";

                } else if(idade >= 14 && idade <= 17){

                    cout << "\n ---- \n";
                    cout << " Juvenil B";
                    cout << "\n ---- \n";

                    } else if(idade >= 18){
                            cout << "\n ---- \n";
                            cout << " Senior";
                            cout << "\n ---- \n";

                           } else {

                                cout << "\n ---- \n";
                                cout << " Muito jovem!";
                                cout << "\n ---- \n";

                                }
}
