#include <iostream>
#include <stdlib.h>
#include <locale>

#define T 4

using namespace std;

void bubbleD(int vet[])
{
    for (int x = 1; x < T; x++) {
        for (int y = 4; y >= x; y--) {
            if (vet[y] < vet[y-1]) {
                int aux = vet[y];
                vet[y] = vet[y-1];
                vet[y-1] = aux;
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
    int vet[T] = {20,19,16,10};

    bubbleD(vet);

    printArray(vet);

    return 0;
}
