#include <iostream>
#include <stdlib.h>
#include <locale>

#define T 4

using namespace std;

void bubbleD(int vet[])
{
    for (int x = 0; x < T - 1; x++) {
        for (int y = x ; y < T - x - 1; y++) {
            if (vet[x] < vet[y]) {
                int aux = vet[x];
                vet[x] = vet[y];
                vet[y] = aux;
            }
        }
    }
}

void printArray(int vet[]) {
    for (int i = 0; i < T; i++) {
        cout << vet[i] << " ";
    }
    cout << endl;
}

int main() {
    int vet[T] = {16,17,19,20};

    bubbleD(vet);

    printArray(vet);

    return 0;
}
