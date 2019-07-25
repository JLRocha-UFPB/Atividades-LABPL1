#include "Data.h"

Data::Data()
{}

Data::Data(int dia,int mes,int ano){
    this ->dia = dia;
    this ->mes = mes;
    this ->ano = ano;
}


int Data::getDia(){
    return dia;
}

int Data::getMes(){
    return mes;
}

int Data::getAno(){
    return ano;
}


void Data::setDia(int dia){
    this ->dia = dia;
}

void Data::setMes(int mes){
    this ->mes = mes;
}

void Data::setAno(int ano){
    this ->ano = ano;
}


void Data::avancarDia(){

    if(dia <30 && mes == 4 || mes == 6 || mes == 9 || mes == 11){  //meses 4 6 9 11 (meses que possuem 30 dias)
        dia++;
        }else if(dia == 30 && mes == 4 || mes == 6 || mes == 9 || mes == 11){
            mes++;
            dia = 1;
        }


    if(mes == 2 && dia < 28){   //mes 2
        dia++;
    }
        else if(mes == 2 && dia == 28){
            dia = 1;
            mes++;
        }

    if(dia <31 && mes == 1 || mes == 5 || mes == 7 || mes == 8 || mes == 10){  //meses 1 5 7 8 10  (meses que possuem 31 dias)
        dia++;
    }
        else if(dia == 31 && mes == 1 || mes == 5 || mes == 7 || mes == 8 || mes == 10){
            mes++;
            dia = 1;
        }

    if(mes == 12){  //mes dezembro
        if( dia <31){
            dia++;
        }
        else {
            dia = 1;
            mes = 1;  //mes janeiro
            }
        }

    }

