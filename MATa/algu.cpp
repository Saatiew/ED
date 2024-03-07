#include <iostream>
using namespace std;

#define TAMANHO 5

int maior (int a[])
{
    int i, max;
    max = a[0];

    while (i < TAMANHO)
    {
        if(max < a[i])
        {
            max = a[i];
        }
        i = i +1;
    }
    return max;
}

int main()
{
    int i, valor[TAMANHO];
    i = 0;
    while (i < TAMANHO)
    {
        cout << "Entre com um inteiro: ";
        cin >> valor[i];
        i = i + 1;
    }
    cout << "O maior eh " << maior(valor) << endl;

    return 0;
}
