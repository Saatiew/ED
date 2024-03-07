#include <iostream>

using namespace std;

int main()
{
    cout << "- Multiplos de 5 -" << endl;

    for(int i = 1; i <= 500; i++){

            if(i % 5 == 0){

                cout << " - " << i;

            }

            if(i % 50 == 0){


                cout << endl;
            }

    }
}
