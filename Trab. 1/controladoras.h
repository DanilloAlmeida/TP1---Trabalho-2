#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"
#include <stdexcept>
#include <iostream>

using namespace std;

/* INICIO DE DECLARAÇÃO - AUTENTICACAO ########################################*/
class CntrIUAutenticacao:public IUAutenticacao{
private:
    ILNAutenticacao *cntrLNAutencicacao;
public:
    bool autenticar(Email*);
    void setCntrLNAutenticacao(ILNAutenticacao*);
};

void inline CntrIUAutenticacao::setCntrLNAutenticacao(ILNAutenticacao *cntrLNAutencicacao){
    this->cntrLNAutencicacao = cntrLNAutencicacao;
}
/*    FIM DE DECLARAÇÃO - AUTENTICACAO ########################################*/
#endif // CONTROLADORAS_H_INCLUDED

