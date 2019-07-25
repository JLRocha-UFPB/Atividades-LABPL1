#include <iostream>
#include "Empregado.h"

using namespace std;

int main()
{
    Empregado funcionario("jose","martins",-4000);
    Empregado funcionario2("Joao","Rocha",8000);

    cout << "Nome do Funcionario: " << funcionario.getNome() << endl;
    cout << "Sobrenome do Funcionario: " << funcionario.getSobrenome() << endl;
    cout << "Salario do Funcionario: " << funcionario.getSalario() << endl;

    cout << endl;

    cout << "Nome do Funcionario: " << funcionario2.getNome() << endl;
    cout << "Sobrenome do Funcionario: " << funcionario2.getSobrenome() << endl;
    cout << "Salario do Funcionario: " << funcionario2.getSalario() << endl;

    //Com o metodo aumento salario
    cout << endl;
    cout << endl;

    funcionario.aumentoSalario();
    funcionario2.aumentoSalario();


    cout << "Nome do Funcionario: " << funcionario.getNome() << endl;
    cout << "Sobrenome do Funcionario: " << funcionario.getSobrenome() << endl;
    cout << "Novo Salario do Funcionario: " << funcionario.getSalario() << endl;

    cout << endl;

    cout << "Nome do Funcionario: " << funcionario2.getNome() << endl;
    cout << "Sobrenome do Funcionario: " << funcionario2.getSobrenome() << endl;
    cout << "Novo Salario do Funcionario: " << funcionario2.getSalario() << endl;








    return 0;
}
