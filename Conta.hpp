#pragma once
#import <string>

struct Conta
{
    std::string numero;
    std::string cpfTitular;
    std::string nomeTitular;
    float saldo;

    void sacar(float valorAsacar);
    void depositar(float valorADespositar);
};