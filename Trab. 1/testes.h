/**
 * @file testes.h
 * @brief Arquivo com a declaração das classes de testes unitários dos domínios e entidades
 *
 */


#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED
#include <string>
#include "dominios.h"
#include "entidades.h"

using namespace std;

/* ################## TESTES DAS CLASSES DE DOMÍNIOS ########### */


/*INICIO declaracao da classe TUCidade */
/**
 * @brief Declaração da classe de teste unitário para a classe Cidade
 * @author Danillo Danie da Costa Almeida - 221004034
 */

class TUCidade
{
private:
    string valorValido = "Sao Paulo";
    string valorInvalido = "Brasilia";
    Cidade *cidade;                         // Referencia para unidade em teste.
    int estado;                             // Estado do teste.
    void setUp();                           // Metodo para criar unidade em

    void tearDown();                        // Metodo para destruir unidade em

    void testarCenarioSucesso();            // Cenario de teste.
    void testarCenarioFalha();              // Cenario de teste.


public:
    const static int SUCESSO =  0;          // Definicao de constante para
                                            // reportar resultado de teste.
    const static int FALHA   = -1;          // Definicao de constante para
                                            // reportar resultado de teste.
    int run();
};

/*FIM declaracao da classe TUCidade */

/*INICIO declaracao da classe TUDescricao */
/**
 * @brief Declaração da classe de teste unitário para a classe Descricao
 * @author Danillo Danie da Costa Almeida - 221004034
 */

class TUDescricao
{
private:
    string valorValido = "asdfasdfasdf";
    string valorInvalido = ":.,?";
    Descricao *descricao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

// Metodo para executar teste.
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};
/*FIM declaracao da classe TUCidade */

/*INICIO declaracao da classe TUEmail */
/**
 * @brief Declaração da classe de teste unitário para a classe Email
 * @author Danillo Danie da Costa Almeida - 221004034
 */

class TUEmail
{
private:
    string valorValido = "dani@gmail.c";
    string valorInvalido = ".asdf@gmail.com";
    Email *email;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

// Metodo para executar teste.
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};
/*FIM declaracao da classe TUEmail */

/*INICIO declaracao da classe TUNome */
/**
 * @brief Declaração da classe de teste unitário para a classe Nome
 * @author Danillo Danie da Costa Almeida - 221004034
 */

class TUNome
{
private:
    string valorValido = "Joao dos Santos";
    string valorInvalido = "joao dos santos";
    Nome *nome;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

// Metodo para executar teste.
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};
/*FIM declaracao da classe TUNome */

/*INICIO declaracao da classe TUIdioma */
/**
 * @brief Declaração da classe de teste unitário para a classe Idioma
 * @author Bruno dos Santos Gomes - 180098845
 */

class TUIdioma
{
private:
    string valorValido = "Ingles";
    string valorInvalido = "Tupi";
    Idioma *idioma;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

/*FIM declaracao da classe TUIdioma */

/*INICIO declaracao da classe TUSenha */
/**
 * @brief Declaração da classe de teste unitário para a classe Senha
 * @author Bruno dos Santos Gomes - 180098845
 */

class TUSenha
{
private:
    string valorValido = "E$CX1";
    string valorInvalido = "%#CLM";
    Senha *senha;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

/*FIM declaracao da classe TUSenha */


/*INICIO declaracao da classe TUData */
/**
 * @brief Declaração da classe de teste unitário para a classe Data
 * @author Bruno dos Santos Gomes - 180098845
 */

class TUData
{
private:
    string valorValido = "15/Fev";
    string valorInvalido = "43/Jan";
    Data *data;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

/*FIM declaracao da classe TUData */

/*INICIO declaracao da classe TUNota */
/**
 * @brief Declaração da classe de teste unitário para a classe Nota
 * @author Thiago Pereira de Castro - 190131497
 */

class TUNota
{
private:
    const static int valorValido   = 9;
    const static int valorInvalido = 30;
    Nota *nota;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};
/*FIM declaracao da classe TUNota */

/*INICIO declaracao da classe TUPais */
/**
 * @brief Declaração da classe de teste unitário para a classe Pais
 * @author Thiago Pereira de Castro - 190131497
 */

class TUPais
{
private:
    string valorValido = "Japao";
    string valorInvalido = "Argentina";
    Pais *pais;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

// Metodo para executar teste.
public:
    const static int SUCESSO =  0;

    const static int FALHA   = -1;

    int run();
};

/*FIM declaracao da classe TUPais */

/*INICIO declaracao da classe TUCodigo */
/**
 * @brief Declaração da classe de teste unitário para a classe Codigo
 * @author Thiago Pereira de Castro - 190131497
 */

class TUCodigo
{
private:
    // sucesso 45476898783 numero ideal
    // falha 4547689878 nao eh numero de Lunh e possui menos de 11 caracteres
    // falha 454768987918 numero de Lunh, mas com mais de 11 caracteres
    // falha 7698645475 eh numero de Luhn, mas tem menos que 11 caracteres
    // falha 45476i98783 possui uma letra

    string valorValido = "87657464324";
    string valorInvalido = "4547689878";
    Codigo *codigo;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

// Metodo para executar teste.
public:
    const static int SUCESSO =  0;

    const static int FALHA   = -1;

    int run();
};

/*FIM declaracao da classe TUCodigo */


/* ################## TESTES DAS CLASSES DE ENTIDADES ########### */


/*INICIO declaracao da classe TUUsuario */
/**
 * @brief Declaração da classe de teste unitário para a classe da entidade Usuario
 * @author Bruno dos Santos Gomes - 180098845
 */

class TUUsuario
{
private:
    const string NOME_VALIDO   = "Bruno Santos";
    const string EMAIL_VALIDO   = "brnn@gmail.c";
    const string SENHA_VALIDA   = "B%7$z";
    const string IDIOMA_VALIDO   = "Ingles";
    const string DATA_VALIDA   = "18/Jan";
    const string DESCRICAO_VALIDA   = "Nada a reclamar!";

    Usuario *usuario;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

/*FIM declaracao da classe TUUsuario */

/*INICIO declaracao da classe TUHospedagem */
/**
 * @brief Declaração da classe de teste unitário para a classe da entidade Hospedagem
 * @author Bruno dos Santos Gomes - 180098845
 */

class TUHospedagem
{
private:
    const int NOTA_VALIDA   = 9;
    const string CODIGO_VALIDO   = "99009900905";
    const string CIDADE_VALIDA   = "Istambul";
    const string PAIS_VALIDO   = "Turquia";
    const string DESCRICAO_VALIDA   = "Bacana, lugar de cinema!";

    Hospedagem *hospedagem;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

/*FIM declaracao da classe TUHospedagem */

/*INICIO declaracao da classe TUAvaliacao */
/**
 * @brief Declaração da classe de teste unitário para a classe da entidade Avaliacao
 * @author Bruno dos Santos Gomes - 180098845
 */


class TUAvaliacao
{
private:
    const int NOTA_VALIDA   = 4;
    const string CODIGO_VALIDO   = "12345678903";
    const string DESCRICAO_VALIDA   = "Deixou a desejar!";

    Avaliacao *avaliacao;
    int estado;
    void setUp();
    void tearDown();
    void testarCenarioSucesso();
public:
    const static int SUCESSO =  0;
    const static int FALHA   = -1;
    int run();
};

/*FIM declaracao da classe TUAvaliacao */


#endif // TESTES_H_INCLUDED

