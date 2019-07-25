#include <iostream>
#include "Pessoa.h"

using namespace std;

int main()
{
    Pessoa people(19,"Joao Lucas","9xxxxxxx6");

    cout << people.getIdade() << endl;
    cout << people.getNome() << endl;
    cout << people.getTelefone() << endl;

}
