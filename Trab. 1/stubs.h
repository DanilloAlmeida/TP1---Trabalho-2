#ifndef STUBS_H_INCLUDED
#define STUBS_H_INCLUDED

#include "Interfaces.h"

#include <stdexcept>
#include <iostream>
#include <typeinfo>

using namespace std;

/* INICIO DE DECLARAÇÃO DE CLASSE STUB - AUTENTICACAO #########################*/
class StubLNAutenticacao:public ILNAutenticacao{

private:
    // Gatilhos de erros
    const static int TRIGGER_FALHA = 67890;
    const static int TRIGGER_ERRO_SISTEMA = 78901;

public:
    //bool autenticar(const Email&, const Senha&);
    bool autenticar(Email&, Senha&);
};
/*    FIM DE DECLARAÇÃO DE CLASSE STUB - AUTENTICACAO #########################*/

#endif // STUBS_H_INCLUDED
