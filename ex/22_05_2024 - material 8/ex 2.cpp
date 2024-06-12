#include <iostream>
#include <list>
#include <iterator>
#include <locale>

using namespace std;

void imprimeLista(list<string> lista)
{

	list<string>::const_iterator lis;

	if (lista.empty())
	{
		cout << "-- Lista Vazia --";
	}
	else{

        lis = lista.begin();
        do{
            cout << *lis << " ";
            lis++;
        }
        while (lis != lista.end());

    }
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

	list<string> lista;

	int qtd, cont = 0;
	string nome;

	cout << "Quantos funcionários deseja cadastrar?" << endl;
	cin >> qtd;

    do{

        cout << "Nome: \n";
        getline(cin, nome);

        lista.push_back(nome);

        cin.ignore();

        cont++;

    }while(cont < qtd);


    if (lista.empty())
	{
		cout << "-- Lista Vazia --";
	}
	else{

        cout << "\n\n\n\n-- Impressão da Lista --\n";

        imprimeLista(lista);


        cout << "\n\n\n\n-- Lista Reversa --\n";

        lista.reverse();
        imprimeLista(lista);


        cout << "\n\n\n\n-- Lista Ordenada --\n";

        lista.sort();
        imprimeLista(lista);

	}




    cout << endl << endl << endl;
	/*
	lista.push_front(1); // [1]
	lista.push_front(10); // [10,1]
	lista.push_back(2); //[10,1,2]
	lista.push_back(20); //[10,1,2,20]
	lista.push_front(5); //[5,10,1,2,20]
	imprimiLista(lista);

	cout << endl;

	cout << "Itens na lista: " << lista.size() << " valores " << endl;
	lista.sort(); // [1,2,5,10,20]

	cout << endl;
	imprimiLista(lista);

	cout << endl;
	lista.reverse(); //[20,10,5,2,1]
	imprimiLista(lista);

	lista.push_front(100); //[100,20,10,5,2,1]
	lista.push_back(55); //[100,20,10,5,2,1,55]

	cout << endl;
	imprimiLista(lista);

	lista.sort(); //[1,2,5,10,20,55,100]
	cout << endl;
	imprimiLista(lista);

	lista.push_back(55); //[1,2,5,10,20,55,100,55]

	cout << endl;
	imprimiLista(lista);

	lista.remove(55);//[1,2,5,10,20,100]
	cout << endl;
	imprimiLista(lista);

	*/
}