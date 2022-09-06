#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"
#include <stdexcept>
#include <iostream>

using namespace std;

/* INICIO DE DECLARAÇÃO - AUTENTICACAO ########################################*/
class CntrIAAutenticacao:public IAAutenticacao{
private:
    ISAutenticacao *cntrISAutencicacao;
public:
    bool autenticar(Email*);
    void setCntrISAutenticacao(ISAutenticacao*);
};

void inline CntrIAAutenticacao::setCntrISAutenticacao(ISAutenticacao *cntrISAutencicacao){
    this->cntrISAutencicacao = cntrISAutencicacao;
}
/*    FIM DE DECLARAÇÃO - AUTENTICACAO ########################################*/
/* INICIO DE DECLARAÇÃO - USUARIO #############################################*/
class CntrIAUsuario:public IAUsuario{
private:
    const static int INCLUIR   = 1;
    const static int REMOVER   = 2;
    const static int PESQUISAR = 3;
    const static int EDITAR    = 4;
    const static int RETORNAR  = 5;

    ISUsuario *cntrISUsuario;
public:
    void executar(const Email);
    void setCntrISUsuario(ISUsuario *);
};

inline void CntrIAUsuario::setCntrISUsuario(ISUsuario *CntrIAUsuario){
    this->cntrISUsuario = cntrISUsuario;
}


/*    FIM DE DECLARAÇÃO - USUARIO #############################################*/
#endif // CONTROLADORAS_H_INCLUDED

