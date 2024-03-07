#include <iostream>
#include <locale>

using namespace std;

int main()
{
    int codAluno[10], codAlunBaixo = 0, codAlunAlto = 0, codAln = 1;
    float altura[10], altAlunBaixo = 0, altAlunAlto = 0;

    setlocale(LC_ALL, "Portuguese");

    cout << "- Cadastro de alunos e alturas -" << endl;

    for(int i = 0; i < 10; i++){

        codAluno[i] = codAln;

        cout << "Insira a altura do aluno de código: " << codAln << endl;
        cin >> altura[i];

        if(altAlunBaixo == 0 || altAlunBaixo > altura[i]){

            codAlunBaixo = codAln;
            altAlunBaixo = altura[i];

        }

        if(altAlunAlto == 0 || altAlunAlto < altura[i]){

            codAlunAlto = codAln;
            altAlunAlto = altura[i];

        }


        codAln++;

    }

    cout << "\nAluno mais baixo: " << endl;
    cout << "Código: " << codAlunBaixo << endl;
    cout << "Altura: " << altAlunBaixo << endl << endl;


    cout << "Aluno mais alto: " << endl;
    cout << "Código: " << codAlunAlto << endl;
    cout << "Altura: " << altAlunAlto << endl << endl;


}
