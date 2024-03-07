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
        cout << "caractere alfabético" << endl;
    }
    else
    {
        cout << "caractere numérico" << endl;
    }
    if(isdigit(nome[0]))
    {
        cout << "número" << endl;
    }
    else
    {
        cout << "letra" << endl;
    }
    if (isupper(nome[0]))
    {
        cout << "maiúsculo" << endl;
    }
    else
    {
        cout << "minúsculo" << endl;
    }
    return 0;
}
