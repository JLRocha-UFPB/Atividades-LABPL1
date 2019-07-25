#include <iostream>
#include "ControlePagamentos.h"
#include "Pagamento.h"

using namespace std;

int main()
{
    ControlePagamentos test;


    test.setPagamento(500);

    cout << "O Total Calculado Eh: " << "R$ " << test.calculaTotalPagamentos() << endl;

    test.setPagamentos(100);

    cout << "O Total Calculado Eh: " << "R$ " << test.calculaTotalPagamentos() << endl;

    test.setPagamentos(500);

    cout << "O Total Calculado Eh: " << "R$ " << test.calculaTotalPagamentos() << endl;

    return 0;
}
