#include <iostream>
#include <string>

using namespace std;

struct Conta
{
    string numero;
    string cpfTitular;
    string nomeTitular;
    float saldo;

    void sacar(float valorASacar)
{
    if (valorASacar < 0){
        cout << "Não pode sacar valor negativo" << endl;
        return;
    };
    if(valorASacar > saldo) {
        cout << "Saldo insuficiente" << endl;
        return;
    }
    saldo -= valorASacar;
}
void depositar(float valorADepositar)
{
    if ( (valorADepositar > 0))
    {
        if (valorADepositar < 0){
        cout << "Não pode sacar depositart negativo" << endl;
        return;
    };
    }
    saldo += valorADepositar;
}
};





int main()
{
    Conta umaConta;
    umaConta.numero = "123123";
    umaConta.cpfTitular = "123.123.12.10";
    umaConta.nomeTitular = "João Silva";
    umaConta.saldo = 123,00;

    Conta umaOutraConta;
    umaOutraConta.saldo = 220,00;

    umaOutraConta.depositar(500);
    umaOutraConta.sacar(200);

    cout << "Uma Conta:" << umaConta.saldo << "Outra Conta:" << umaOutraConta.saldo << endl;

    return 0; 

}