#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED


#include "dominios.h"
#include <stdexcept>

using namespace std;

class ILNAutenticacao;


/* INICIO DE DECLARACAO DE INTERFACE - APRESENTACAO - AUTENTICACAO ############*/
class IUAutenticacao{
public:
    virtual bool autenticar (Email*) = 0;
    virtual void setCntrLNAutenticacao (ILNAutenticacao *)    = 0;
    virtual ~IUAutenticacao(){}
};
/*    FIM DE DECLARACAO DE INTERFACE - APRESENTACAO - AUTENTICACAO ############*/



/* INICIO DE DECLARACAO DE INTERFACE - SERVICO - AUTENTICACAO #################*/
class ILNAutenticacao{
public:
    virtual bool autenticar (Email&, Senha&) = 0;
    virtual ~ILNAutenticacao(){}
};
/*    FIM DE DECLARACAO DE INTERFACE - SERVICO - AUTENTICACAO #################*/

#endif // INTERFACES_H_INCLUDED


