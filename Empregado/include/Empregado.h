#ifndef EMPREGADO_H
#define EMPREGADO_H
#include <iostream>


class Empregado
{
    public:
        Empregado();
        Empregado(std::string nome,std::string sobrenome,float salario);

        //metodo aumento
        void aumentoSalario();

        //metodos get
        std::string getNome();
        std::string getSobrenome();
        float getSalario();

        //metodos set
        void setNome(std::string nome);
        void setSobrenome(std:: string sobrenome);
        void setSalario(float salario);



    private:
        std::string nome;
        std::string sobrenome;
        float salario;

};

#endif // EMPREGADO_H
