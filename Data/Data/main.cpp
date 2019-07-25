#include "Data.h"

using namespace std;

int main()
{
    Data dateNow;

    dateNow.setDia(31);
    dateNow.setMes(12);
    dateNow.setAno(2019);

    cout << "Now Date is : " << dateNow.getDia() << "/" << dateNow.getMes() << "/" << dateNow.getAno() << endl;


    dateNow.avancarDia();

    cout << "Date Tomorrow is : " << dateNow.getDia() << "/" << dateNow.getMes() << "/" << dateNow.getAno() << endl;

    return 0;
}
