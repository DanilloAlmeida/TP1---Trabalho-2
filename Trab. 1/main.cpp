/**
 * @file main.cpp
 * @brief Arquivo com a implementa��o do programa, onde executa os Testes de unidades das classes dos Dom�nios e Entidades.
 * @section Descri��o
 * Conve��o de codifica��o: Artistic Style (AStyle)
 * @author Bruno dos Santos Gomes
 * @author Danillo Danie da Costa Almeida
 * @author Thiago Pereira de Castro
 */
#include <stdexcept>
#include <iostream>
#include <string>


#include "dominios.h"
#include "entidades.h"
//#include "testes.h"
#include "interfaces.h"
#include "controladoras.h"
#include "stubs.h"

using namespace std;

int main()
{
    IAAutenticacao  *cntrIAAutenticacao;
    IAUsuario       *cntrIAUsuario;

    cntrIAAutenticacao = new CntrIAAutenticacao();
    cntrIAUsuario      = new CntrIAUsuario();

    ISAutenticacao *stubISAutenticacao;
    ISUsuario      *stubISUsuario;

    stubISAutenticacao = new StubISAutenticacao();
    stubISUsuario      = new StubISUsuario();

    cntrIAAutenticacao->setCntrISAutenticacao(stubISAutenticacao);
    cntrIAUsuario->setCntrISUsuario(stubISUsuario);

    bool resultado;

    Email email;

    while (true){
        cout << endl << "Tela inicial de sistema." << endl;

        try{
            resultado = cntrIAAutenticacao->autenticar(&email);
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
        catch(const runtime_error &exp){
            cout << "Erro de sistema. " << endl;
            break;
        }
    }

    try{
        CntrIAUsuario->executar(email);
    }
    catch(const runtime_error &exp){
        cout << "Erro de sistema" << endl;
    }
    delete cntrIAAutenticacao;
    delete cntrIAUsuario;
    delete stubISAutenticacao;
    delete stubISUsuario;
    return 0;
}
