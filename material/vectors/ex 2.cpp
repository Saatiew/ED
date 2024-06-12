#include <iostream>
#include <stdlib.h>
#include <locale>

#define T 4

using namespace std;

void bubblegum(int vet[4])
{
   int x, y, au;

   for(int x = 0; x < T; x++)
   {
       for (y = x + 1; y < T; y++)
       {
           if (vet[x] > vet[y])
           {
               au = vet[x];
               vet[x] = vet[y];
               vet[y] = au;
           }
       }
   }

}

void printb (int vet[])
{
    for(int i = 0; i < T; i++)
    {
        cout << " " << vet[i] << " ";
    }


}


int main()
{
    int vet[T] = {20,19,17,16};

    bubblegum(vet);

    printb(vet);
}
