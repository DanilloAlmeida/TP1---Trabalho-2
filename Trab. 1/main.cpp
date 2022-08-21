/**
 * @file main.cpp
 * @brief Arquivo com a implementa��o do programa, onde executa os Testes de unidades das classes dos Dom�nios e Entidades.
 * @section Descri��o
 * Conve��o de codifica��o: Artistic Style (AStyle)
 * @author Bruno dos Santos Gomes
 * @author Danillo Danie da Costa Almeida
 * @author Thiago Pereira de Castro
 */

#include <iostream>

#include "dominios.h"
//#include "entidades.h"
//#include "testes.h"
#include "interfaces.h"
#include "controladoras.h"
#include "stubs.h"

using namespace std;

int main()
{
    IUAutenticacao *cntrIUAutenticacao = new CntrIUAutenticacao();
    ILNAutenticacao *stubLNAutenticacao = new StubLNAutenticacao();

    cntrIUAutenticacao->setCntrLNAutenticacao(stubLNAutenticacao);

    bool resultado;

    Email email;

    while (true){
        cout << endl << "Tela inicial de sistema." << endl;

        try{
            resultado = cntrIUAutenticacao->autenticar(&email);
        }
        catch(const runtime_error &exp){
            cout << "Erro de sistema. " << endl;
            break;
        }

        if (resultado){
            cout << endl << "Sucesso autenticacao. " << endl;
            cout << endl << "Email ....: " << email.getEmail() << endl;
            break;
        }
        else{
            cout << endl << "Erro autenticacao. " << endl;
            break;
        }
    }
    delete cntrIUAutenticacao;
    delete stubLNAutenticacao;
    return 0;
}
