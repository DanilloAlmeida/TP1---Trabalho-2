/**
 * @file main.cpp
 * @brief Arquivo com a implementação do programa, onde executa os Testes de unidades das classes dos Domínios e Entidades.
 * @section Descrição
 * Conveção de codificação: Artistic Style (AStyle)
 * @author Bruno dos Santos Gomes
 * @author Danillo Danie da Costa Almeida
 * @author Thiago Pereira de Castro
 */

#include <iostream>

#include "dominios.h"
#include "entidades.h"
#include "testes.h"

using namespace std;

int main()
{
    /* --------------------------------------------- */
    /*       TESTES DAS CLASSES DOS DOMÍNIOS         */
    /* --------------------------------------------- */

    cout << "#######  TESTE DE UNIDADE DOS DOMINIOS #######\n" << endl;
    /* --------------------------------------------- */

    /* INICIO DO TESTE UNITARIO CLASSE CIDADE */

    TUCidade testeA;
    switch(testeA.run())
    {
    case TUCidade::SUCESSO:
        cout << "SUCESSO - CIDADE" << endl;
        break;
    case TUCidade::FALHA  :
        cout << "FALHA   - CIDADE" << endl;
        break;
    }

    /* FIM DO TESTE UNITARIO CLASSE CIDADE */

    /* INICIO DO TESTE UNITARIO CLASSE DESCRICAO */

    TUDescricao testeB;
    switch(testeB.run())
    {
    case TUDescricao::SUCESSO:
        cout << "SUCESSO - DESCRICAO" << endl;
        break;
    case TUDescricao::FALHA  :
        cout << "FALHA   - DESCRICAO" << endl;
        break;
    }

    /* FIM DO TESTE UNITARIO CLASSE DESCRICAO */

    /* INICIO DO TESTE UNITARIO CLASSE EMAIL */

    TUEmail testeC;
    switch(testeC.run())
    {
    case TUEmail::SUCESSO:
        cout << "SUCESSO - E-MAIL" << endl;
        break;
    case TUEmail::FALHA  :
        cout << "FALHA   - E-MAIL" << endl;
        break;
    }

    /* FIM DO TESTE UNITARIO CLASSE EMAIL */

    /* INICIO DO TESTE UNITARIO CLASSE NOME */
    TUNome testeD;
    switch(testeD.run())
    {
    case TUNome::SUCESSO:
        cout << "SUCESSO - NOME" << endl;
        break;
    case TUNome::FALHA  :
        cout << "FALHA   - NOME" << endl;
        break;
    }

    /* FIM DO TESTE UNITARIO CLASSE NOME */

    /* INICIO DO TESTE UNITARIO CLASSE IDIOMA */

    TUIdioma testeE;
    switch(testeE.run())
    {
    case TUIdioma::SUCESSO:
        cout << "SUCESSO - IDIOMA" << endl;
        break;
    case TUIdioma::FALHA  :
        cout << "FALHA   - IDIOMA" << endl;
        break;
    }
    /* FIM DO TESTE UNITARIO CLASSE IDIOMA */

    /* INICIO DO TESTE UNITARIO CLASSE SENHA */

    TUSenha testeF;
    switch(testeF.run())
    {
    case TUSenha::SUCESSO:
        cout << "SUCESSO - SENHA" << endl;
        break;
    case TUSenha::FALHA  :
        cout << "FALHA   - SENHA" << endl;
        break;
    }

    /* FIM DO TESTE UNITARIO CLASSE SENHA */

    /* INICIO DO TESTE UNITARIO CLASSE DATA */

    TUData testeG;
    switch(testeG.run())
    {
    case TUData::SUCESSO:
        cout << "SUCESSO - DATA" << endl;
        break;
    case TUData::FALHA  :
        cout << "FALHA   - DATA" << endl;
        break;
    }

    /* FIM DO TESTE UNITARIO CLASSE DATA */

    /* INICIO DO TESTE UNITARIO CLASSE NOTA */

    TUNota testeH;
    switch(testeH.run())
    {
    case TUNota::SUCESSO:
        cout << "SUCESSO - NOTA" << endl;
        break;
    case TUNota::FALHA:
        cout << "FALHA   - NOTA" << endl;
        break;
    }

    /* FIM DO TESTE UNITARIO CLASSE NOTA */

    /* INICIO DO TESTE UNITARIO CLASSE PAIS */

    TUPais testeI;
    switch(testeI.run())
    {
    case TUPais::SUCESSO:
        cout << "SUCESSO - PAIS" << endl;
        break;
    case TUPais::FALHA  :
        cout << "FALHA   - PAIS" << endl;
        break;
    }

    /* FIM DO TESTE UNITARIO CLASSE PAIS */


    /* INICIO DO TESTE UNITARIO CLASSE CODIGO */
    TUCodigo testeJ;
    switch(testeJ.run())
    {
    case TUCodigo::SUCESSO:
        cout << "SUCESSO - CODIGO" << endl;
        break;
    case TUCodigo::FALHA  :
        cout << "FALHA   - CODIGO" << endl;
        break;
    }

    /* FIM DO TESTE UNITARIO CLASSE CODIGO */


    /* --------------------------------------------- */
    /*       TESTES DAS CLASSES DOS DOMÍNIOS         */
    /* --------------------------------------------- */


    cout << "\n#######  TESTE DE UNIDADE DAS ENTIDADES  #######\n" << endl;

    /* INICIO DO TESTE UNITARIO CLASSE USUARIO */

    TUUsuario testeEntidade1;

    switch(testeEntidade1.run())
    {
    case TUUsuario::SUCESSO:
        cout << "SUCESSO - USUARIO" << endl;
        break;
    case TUUsuario::FALHA  :
        cout << "FALHA   - USUARIO" << endl;
        break;
    }

    /* FIM DO TESTE UNITARIO CLASSE USUARIO */

    /* INICIO DO TESTE UNITARIO CLASSE HOSPEDAGEM */

    TUHospedagem testeEntidade2;

    switch(testeEntidade2.run())
    {
    case TUHospedagem::SUCESSO:
        cout << "SUCESSO - HOSPEDAGEM" << endl;
        break;
    case TUHospedagem::FALHA  :
        cout << "FALHA   - HOSPEDAGEM" << endl;
        break;
    }

    /* FIM DO TESTE UNITARIO CLASSE HOSPEDAGEM */

    /* INICIO DO TESTE UNITARIO CLASSE AVALIACAO */

    TUAvaliacao testeEntidade3;

    switch(testeEntidade3.run())
    {
    case TUAvaliacao::SUCESSO:
        cout << "SUCESSO - AVALIACAO" << endl;
        break;
    case TUAvaliacao::FALHA  :
        cout << "FALHA   - AVALIACAO" << endl;
        break;
    }

    /* FIM DO TESTE UNITARIO CLASSE AVALIACAO */

    return 0;
}
