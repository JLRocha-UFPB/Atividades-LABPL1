#include "Empregado.h"

using namespace std;

Empregado::Empregado()
{}

Empregado::Empregado(string nome,string sobrenome,float salario){
    setNome(nome);
    setSobrenome(sobrenome);
    setSalario(salario);

}

    string Empregado::getNome(){
        return nome;
    }
    string Empregado::getSobrenome(){
        return sobrenome;
    }
    float Empregado::getSalario(){
        return salario;
    }


    void Empregado::setNome(string nome){
        this ->nome = nome;
    }

    void Empregado::setSobrenome(string sobrenome){
        this ->sobrenome = sobrenome;
    }
    void Empregado::setSalario(float salario){
        if(salario < 0 ){
            this ->salario = 0;
        }else
            this ->salario = salario;
    }


    void Empregado::aumentoSalario(){
        if(salario > 0){
            salario = salario + (salario *0.10);
        }else
            salario = 0;
    }







