#include "controladoras.h"

/* INICIO DA IMPLEMENTACAO DE METODOS - AUTENTICACAO ##########################*/
bool CntrIUAutenticacao::autenticar(Email *email){
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

bool resultado = cntrLNAutencicacao->autenticar(*email, senha);
return resultado;
}

/*    FIM DA IMPLEMENTACAO DE METODOS - AUTENTICACAO ##########################*/
