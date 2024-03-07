#include <iostream>
#include <string.h>
#include <locale>

using namespace std;

void inverte(char nome[])
{
    int tam = strlen(nome);
    for(int i = tam - 1; i >= 0; i--)
    {
        cout << nome[i];
    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[] = "japa";
    inverte(nome);
    cout << endl;

    if (isalpha(nome[0]))
    {
        cout << "caractere alfab�tico" << endl;
    }
    else
    {
        cout << "caractere num�rico" << endl;
    }
    if(isdigit(nome[0]))
    {
        cout << "n�mero" << endl;
    }
    else
    {
        cout << "letra" << endl;
    }
    if (isupper(nome[0]))
    {
        cout << "mai�sculo" << endl;
    }
    else
    {
        cout << "min�sculo" << endl;
    }
    return 0;
}
