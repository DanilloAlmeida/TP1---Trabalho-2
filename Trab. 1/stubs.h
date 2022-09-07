#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "Interfaces.h"

#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;

/* INICIO DE DECLARAÇÃO DE CLASSE STUB - AUTENTICACAO #########################*/
class StubISAutenticacao:public ISAutenticacao{

private:
    // Gatilhos de erros
    /*
    const static int TRIGGER_FALHA = 67890;
    const static int TRIGGER_ERRO_SISTEMA = 78901;
    */
    string TRIGGER_FALHA = "67890";
    string TRIGGER_ERRO_SISTEMA = "78901";

public:
    //bool autenticar(const Email&, const Senha&);
    bool autenticar(Email&, Senha&);
};
/*    FIM DE DECLARAÇÃO DE CLASSE STUB - AUTENTICACAO #########################*/


/* INICIO DE DECLARAÇÃO DE CLASSE STUB - USUARIO ##############################*/
class StubISUsuario:public ISUsuario{

private:
    // Gatilhos de erros
    string TRIGGER_FALHA = "67890";
    string TRIGGER_ERRO_SISTEMA = "78901";

public:
    //bool autenticar(const Email&, const Senha&);
    bool incluir(const Usuario&);
    bool remover(const Email&);
    bool pesquisar(Usuario&);
    bool editar(const Usuario&);
};
/*    FIM DE DECLARAÇÃO DE CLASSE STUB - USUARIO ##############################*/

#endif // STUBS_H_INCLUDED
