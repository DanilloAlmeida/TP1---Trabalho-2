#include "stubs.h"


/* INICIO DA IMPLEMENTACAO DE METODOS - AUTENTICACAO ##########################*/
//bool StubLNAutenticacao::autenticar(const Email &email, const Senha &senha){
bool StubISAutenticacao::autenticar(Email &email, Senha &senha){
    cout << endl << "StubISAutenticacao::autenticar" << endl;
    cout << "Email...: " << email.getEmail() << endl;
    cout << "Senha...: " << senha.getSenha() << endl;

    bool resultado = true;

    switch(email.getEmail()){
        case TRIGGER_FALHA:
            resultado = false;
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de sistema");
    }
    return resultado;
}
/*    FIM DA IMPLEMENTACAO DE METODOS - AUTENTICACAO ##########################*/


/* INICIO DA IMPLEMENTACAO DE METODOS - USUARIO ###############################*/

bool StubISUsuario::incluir(Usuario &usuario){
    cout << endl << "StubISUsuario::incluir" << endl;

    bool resultado = true;

    switch(usuario.getEmail()){
        case TRIGGER_FALHA:
            resultado = false;
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de sistema");
    }
    return resultado;
}
/* ----------------------------------------------------------------------------*/
bool StubISUsuario::remover(Email &email){
    cout << endl << "StubISUsuario::email" << endl;

    bool resultado = true;

    switch(email.getEmail()){
        case TRIGGER_FALHA:
            resultado = false;
            break;
        case TRIGGER_ERRO_SISTEMA:
            throw runtime_error("Erro de sistema");
    }
    return resultado;
}
/* ----------------------------------------------------------------------------*/
bool StubISUsuario::pesquisar(Usuario &usuario){
    cout << endl << "StubISUsuario::pesquisar" << endl;

    bool resultado = true;

    // switch(email.getEmail()){
    //     case TRIGGER_FALHA:
    //         resultado = false;
    //         break;
    //     case TRIGGER_ERRO_SISTEMA:
    //         throw runtime_error("Erro de sistema");
    // }
    return resultado;
}
/* ----------------------------------------------------------------------------*/
bool StubISUsuario::editar(const Usuario &usuario){
    cout << endl << "StubISUsuario::editar" << endl;

    bool resultado = true;

    // switch(email.getEmail()){
    //     case TRIGGER_FALHA:
    //         resultado = false;
    //         break;
    //     case TRIGGER_ERRO_SISTEMA:
    //         throw runtime_error("Erro de sistema");
    // }
    return resultado;
}
/* ----------------------------------------------------------------------------*/
/*    FIM DA IMPLEMENTACAO DE METODOS - USUARIO ###############################*/
