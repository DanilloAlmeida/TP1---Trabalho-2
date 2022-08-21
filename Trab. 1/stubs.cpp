#include "stubs.h"

const int StubLNAutenticacao::TRIGGER_FALHA;
const int StubLNAutenticacao::TRIGGER_ERRO_SISTEMA;

/* INICIO DA IMPLEMENTACAO DE METODOS - AUTENTICACAO ##########################*/
//bool StubLNAutenticacao::autenticar(const Email &email, const Senha &senha){
bool StubLNAutenticacao::autenticar(Email &email, Senha &senha){
    cout << endl << "StubLNAutenticacao::autenticar" << endl;
    cout << "Email...: " << email.getEmail() << endl;
    cout << "Senha...: " << senha.getSenha() << endl;

    // switch(email.getEmail()){
    //     case TRIGGER_FALHA:
    //         return false;
    //     case TRIGGER_ERRO_SISTEMA:
    //         throw runtime_error("Erro de sistema");
    // }
    return true;
}
/*    FIM DA IMPLEMENTACAO DE METODOS - AUTENTICACAO ##########################*/