#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED


#include "dominios.h"
#include "entidades.h"
#include <stdexcept>

using namespace std;

class ISAutenticacao;
class ISUsuario;


/* INICIO DE DECLARACAO DE INTERFACE - APRESENTACAO - AUTENTICACAO ############*/
class IAAutenticacao{
public:
    virtual bool autenticar (Email*) = 0;
    virtual void setCntrISAutenticacao (ISAutenticacao *)    = 0;
    virtual ~IAAutenticacao(){}
};
/*    FIM DE DECLARACAO DE INTERFACE - APRESENTACAO - AUTENTICACAO ############*/

/* INICIO DE DECLARACAO DE INTERFACE - APRESENTACAO - USUARIO #################*/
class IAUsuario{
public:
    virtual bool executar (const Email&) = 0;
    virtual void setCntrISUsuario (ISUsuario *)    = 0;
    virtual ~IAUsuario(){}
};
/*    FIM DE DECLARACAO DE INTERFACE - APRESENTACAO - USUARIO #################*/



/* INICIO DE DECLARACAO DE INTERFACE - SERVICO - AUTENTICACAO #################*/
class ISAutenticacao{
public:
    virtual bool autenticar (Email&, Senha&) = 0;
    virtual ~ISAutenticacao(){}
};
/*    FIM DE DECLARACAO DE INTERFACE - SERVICO - AUTENTICACAO #################*/


/* INICIO DE DECLARACAO DE INTERFACE - SERVICO - USUARIO ######################*/
class ISUsuario{
public:
    virtual bool incluir (const Usuario&) = 0;
    virtual bool remover (const Email&) = 0;
    virtual bool pesquisar (Usuario&) = 0;
    virtual bool editar (const Usuario&) = 0;
    virtual ~ISUsuario(){}
};
/*    FIM DE DECLARACAO DE INTERFACE - SERVICO - USUARIO ######################*/

#endif // INTERFACES_H_INCLUDED


