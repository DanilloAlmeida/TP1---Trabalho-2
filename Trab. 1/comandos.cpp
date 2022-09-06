#include "comandos.h"


//--- IMPLEMENTA METODO INCLUIR  ------------------------------------------------
void ComandoIAUsuarioIncluir::executar(ISUsuario* cntrISUsuario){

    bool resultado;
    Usuario usuario;

    //INTERACAO COM O USUARIO

    while(true){
        try{
            string valor;
            Email email;
            cout << "Digite o email: ";
            cin >> valor;
            email.setEmail(valor);
            usuario.setEmail(email);
            break;
        }
        catch(invalid_argument &exp){
            cout << "E-mail com formato incorreto" <<endl;
        }
    }
    resultado = cntrISUsuario->incluir(usuario);
    //CRITICAR RESULTADO E APRESENTAR CORRESPONDENTE.

    if (resultado){
        cout << "Sucesso na execucao da operacao" << endl;
    }
    else{
        cout << "Falha na execucao da operacao" << endl;
    }
}
//--- IMPLEMENTA METODO REMOVER  ------------------------------------------------
void ComandoIAUsuarioRemover::executar(ISUsuario* cntrISUsuario){

    bool resultado;
    Email email;

    //INTERACAO COM O USUARIO

    while(true){
        try{
            string valor;
            cout << "Digite o email: ";
            cin >> valor;
            email.setEmail(valor);
            break;
        }
        catch(invalid_argument &exp){
            cout << "E-mail com formato incorreto" <<endl;
        }
    }
    resultado = cntrISUsuario->remover(email);
    //CRITICAR RESULTADO E APRESENTAR CORRESPONDENTE.

    if (resultado){
        cout << "Sucesso na execucao da operacao" << endl;
    }
    else{
        cout << "Falha na execucao da operacao" << endl;
    }
}
// --- PESQUISAR ----------------------------------------------------------------
void ComandoIAUsuarioPesquisar::executar(ISUsuario* cntrISUsuario){
    bool resultado;
    Usuario usuario;

    resultado = cntrISUsuario->pesquisar(usuario);

    if (resultado){
        cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}
// --- EDITAR -------------------------------------------------------------------
void ComandoIAUsuarioEditar::executar(ISUsuario* cntrISUsuario){
    bool resultado;
    Usuario usuario;

    resultado = cntrISUsuario->editar(usuario);

    if (resultado){
        cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}
