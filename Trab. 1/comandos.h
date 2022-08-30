#ifndef COMANDOS_H_INCLUDED
#define COMANDOS_H_INCLUDED

#include "interfaces.h"
#include "dominios.h"
#include "entidades.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>

/* INICIO DE DECLARAÇÃO DE COMANDOS ###########################################*/

class ComandoIAUsuario{
public:
    virtual void executar(ISUsuario*) = 0;
    virtual ~ComandoIAUsuario(){}
};
//--  INCLUIR  ------------------------------------------------------------------
class ComandoIAUsuarioIncluir:public ComandoIAUsuario{
public:
    void executar(ISUsuario*);
};
//---  REMOVER  -----------------------------------------------------------------
class ComandoIAUsuarioRemover:public ComandoIAUsuario{
public:
    void executar(ISUsuario*);
};
//---  PESQUISAR  -----------------------------------------------------------------
class ComandoIAUsuarioPesquisar:public ComandoIAUsuario{
public:
    void executar(ISUsuario*);
};

//---  EDITAR  ------------------------------------------------------------------

class ComandoIAUsuarioEditar:public ComandoIAUsuario{
public:
    void executar(ISUsuario*);
};
/*    FIM DE DECLARAÇÃO DE COMANDOS ###########################################*/
#endif // COMANDOS_H_INCLUDED
