#include <iostream>
#include "Despesa.h"
#include "ControleGasto.h"
using namespace std;

int main()
{

    ControleGasto objeto1;
    Despesa d = Despesa(3000,"ps4Pro");
    objeto1.setDespesa(d,1);

    d = Despesa(2500,"xboxONE");
    objeto1.setDespesa(d,2);

    cout << objeto1.getDespesa(1).getTipoGasto() << endl;
    cout << objeto1.getDespesa(1).getValor() << endl;

    cout  << objeto1.getDespesa(2).getTipoGasto() << endl;
    cout << objeto1.getDespesa(2).getValor() << endl;

    cout << endl;



    cout <<"Total Despesas: "<<objeto1.calculaTotalDespesas()<<endl;











}
