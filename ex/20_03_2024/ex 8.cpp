#include <iostream>

using namespace std;


int var = 0;

void passagemPorReferencia(int* n){ // *n aponta para o endereço de pvar
	*n = 20;
}

int main()
{
	var = 10;

	int *pvar = &var;


	passagemPorReferencia(&var);

	cout << var << endl;
	return 0;
}
