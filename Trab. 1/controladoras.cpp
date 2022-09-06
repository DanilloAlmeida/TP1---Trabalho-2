#include "controladoras.h"
#include "comandos.h"

/* INICIO DA IMPLEMENTACAO DE METODOS - AUTENTICACAO ##########################*/
bool CntrIAAutenticacao::autenticar(Email *email){

    bool resultado;
    Senha senha;
    string entrada;

//solicitando matricula e senha

    while (true){
        cout << endl << "Autenticacao de usuario. "<< endl << endl;

        try{
            cout << "Digite o email: ";
            cin >> entrada;
            email->setEmail(entrada);

            cout << "Digite a senha: ";
            cin >> entrada;
            senha.setSenha(entrada);
            break;
        }
        catch (const invalid_argument &exp){
            cout << endl << "Dado em formato incorreto." <<endl;
        }
    }

//solicitando autenticacao

    resultado = cntrISAutencicacao->autenticar(*email, senha);
    return resultado;
}

/*    FIM DA IMPLEMENTACAO DE METODOS - AUTENTICACAO ##########################*/

void CntrIAUsuario::executar(const Email &email){

    ComandoIAUsuario *comando;
    int opcao;

    while(true){
        cout << endl << "Gerenciamento de Ususarios" << endl << endl;
        cout << "Incluir   - " << INCLUIR << endl;
        cout << "Remover   - " << REMOVER << endl;
        cout << "Pesquisar - " << PESQUISAR << endl;
        cout << "Editar    - " << EDITAR << endl;
        cout << "Retornar  - " << RETONAR << endl << endl;
        cout << "Selecione uma opcao:  ";
        cin >> opcao;

        switch (opcao)
        {
        case INCLUIR:
            comando= new ComandoIAUsuarioIncluir();
            comando->executar(CntrIAUsuario);
            delete comando;
            break;
        case REMOVER:
            comando= new ComandoIAUsuarioRemover();
            comando->executar(CntrIAUsuario);
            delete comando;
            break;
        case PESQUISAR:
            comando= new ComandoIAUsuarioPesquisar();
            comando->executar(CntrIAUsuario);
            delete comando;
            break;
        case EDITAR:
            comando= new ComandoIAUsuarioEditar();
            comando->executar(CntrIAUsuario);
            delete comando;
            break;
        }
        if(opcao == RETORNAR){
            break;
        }
    }
    return;
}
