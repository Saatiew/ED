#include <iostream>
#include <locale>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char nome[] = "Japones";
    int i = 0;

    while(nome[i] != '\0')
    {
        cout << nome[i];
        i++;
    }
    return 0;
}
