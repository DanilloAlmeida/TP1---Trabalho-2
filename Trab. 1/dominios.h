/**
 * @file dominios.h
 * @brief Arquivo com a declaração das classes dos Domínios
 *
 */

#ifndef DOMINIOS_H
#define DOMINIOS_H
#include <string>
#include <stdexcept>

using namespace std;


/*INICIO declaracao classe dominio Cidade */
/**
 *  @brief Declaração da classe Cidade
 *  @author Danillo Danie da Costa Almeida - 221004034
 *  @section Descrição
 *  Armazena uma cidade
 *  @subsection Formato
 *  Uma entre as seguintes cidades: Antalia, Bangkok, Delhi, Dubai, Hong Kong, Londres, Macau, Mumbai, Paris,
 *  Rio de Janeiro, Sao Paulo, Seul, Istambul, Kuala Lumpur, Nova Iorque,
 *  Osaka, Phuket, Shenzhen, Toquio.
 *
 */

class Cidade
{
public:

/// Permite informar um valor para cidade, como string
    void setCidade (string);

/// Obtém o valor
    string getCidade();

private:
    string cidade;
    void validarCidade(string);
};

/// Retorna o valor de cidade
inline string Cidade::getCidade()
{
    return cidade;
}
/*FIM declaracao classe dominio Cidade  */

/*INICIO declaracao classe dominio Descricao  */
/**
 *  @brief Declaração da classe Descricao
 *  @author Danillo Danie da Costa Almeida - 221004034
 *  @section Descrição
 *  Armazena uma descrição
 *  @subsection Formato
 *  0 a 40 caracteres,
 *  sem espaços em sequência e
 *  sem os seguintes caracteres de pontuação (. , ; : ? ! -) em sequeência.
 *
 */

class Descricao
{
public:

/// Permite informar um valor para cidade, como string
    void setDescricao (string);

/// Obtém o valor
    string getDescricao();

private:
    string descricao;
    void validarDescricao(string);
};

/// Retorna o valor da descricao
inline string Descricao::getDescricao()
{
    return descricao;
}
/*FIM declaracao classe dominio Descricao  */

/*INICIO declaracao classe dominio Email  */
/**
 *  @brief Declaração da classe Email
 *  @author Danillo Danie da Costa Almeida - 221004034
 *  @section Descrição
 *  Armazena um email
 *  @subsection Formato
 *
 *  parte-local@domínio, onde:
 *  Nome da parte-local é composto por até 64 caracteres;
 *  Caracteres podendo ser: A-Z, a-z, 0-9, (hífen, sublinhado, ponto, desde que seguido por letra ou dígito),
 *  caractere ponto(.) não pode ser o primeiro caractere do nome e
 *  domínio composto por lista de termos separados por pontos.
 *  Ponto(.) não pode ser o primeiro caractere do nome de domínio e não ocorrer em sequência,
 *  termo é composto por até 63 caracteres, podendo ser: A-Z, a-z, 0-9 e o
 *  caractere hífen(-) desde que não seja o primeiro ou último caractere.
 *
 */

class Email
{
public:

/// Permite informar um valor para email, como string
    void setEmail (string);

/// Obtém o valor
    string getEmail();

private:
    string email;
    void validarEmail(string);
};

/// Retorna o valor de email
inline string Email::getEmail()
{
    return email;
}
/*FIM declaracao classe dominio Email  */

/*INICIO declaracao classe dominio Nome  */
/**
 *  @brief Declaração da classe Nome
 *  @author Danillo Danie da Costa Almeida - 221004034
 *  @section Descrição
 *  Armazena um nome
 *  @subsection Formato
 *  Prenome e Sobrenome, até 30 caracteres,
 *  podendo ser: A-Z, a-z ou espaço em branco.
 *  Não há espaços em branco em sequência e
 *  o primeiro caractere do prenome e sobrenome são maiúsculos e o restante minúsculo.
 *
 */

class Nome
{
public:
/// Permite informar um valor para nome, como string
    void setNome (string);
/// Obtém o nome
    string getNome();
private:
    string nome;
    void validarNome(string);
};
/// Retorna o valor de nome
inline string Nome::getNome()
{
    return nome;
}
/*FIM declaracao classe dominio Nome  */

/*INICIO declaracao classe dominio Idioma  */
/**
 *  @brief Declaração da classe Idioma
 *  @author Bruno dos Santos Gomes - 180098845
 *  @section Descrição
 *  Armazena um idioma
 *  @subsection Formato
 *  Um entre os seguintes idiomas: Ingles, Chines Mandarim, Hindi, Espanhol,
 *  Frances, Arabe, Bengali, Russo, Portugues, Indonesio.
 *
 */

class Idioma
{
public:

/// Permite informar um valor para Idioma, como string
    void setIdioma(string);

/// Obtém o valor
    string getIdioma();

private:

    string idioma;
    void validarIdioma(string);

};

/// Retorna o valor de idioma
inline string Idioma::getIdioma()
{
    return idioma;
}
/*FIM declaracao classe dominio Idioma  */

/*INICIO declaracao classe dominio Senha  */
/**
 *  @brief Declaração da classe Senha
 *  @author Bruno dos Santos Gomes - 180098845
 *  @section Descrição
 *  Armazena uma senha
 *  @subsection Formato
 *  XXXXX, onde:
 *  X pode ser letra (A-Z ou a-z), dígito (0-9) ou caractere especial (! # $ % &) e
 *  existe pelo menos uma letra, um dígito e um caractere especial.
 *
 */

class Senha
{
public:

/// Permite informar um valor para senha, como string
    void setSenha(string);

/// Obtém o valor
    string getSenha();

private:
    string senha;
    void validarSenha(string);


};

/// Retorna o valor de senha
inline string Senha::getSenha()
{
    return senha;
}
/*FIM declaracao classe dominio Senha  */


/*INICIO declaracao classe dominio Data  */
/**
 *  @brief Declaração da classe Data
 *  @author Bruno dos Santos Gomes - 180098845
 *  @section Descrição
 *  Armazena uma data
 *  @subsection Formato
 *  DD/MES, onde:
 *  DD - 01 a 31
 *
 *  MES - Jan, Fev, Mar, Abr, Mai, Jun, Jul, Ago, Set, Out, Nov, Dez
 *
 */

class Data
{

public:

/// Permite informar um valor para data, como string
    void setData(string);

/// Obtém o valor de Data
    string getData();

private:
    string data;
    void validarData(string);


};

/// Retorna o valor de data
inline string Data::getData()
{
    return data;
}
/*FIM declaracao classe dominio Data  */

/*INICIO declaracao classe dominio Nota  */
/**
 *  @brief Declaração da classe Nota
 *  @author Thiago Pereira de Castro - 190131497
 *  @section Descrição
 *  Armazena uma nota
 *  @subsection Formato
 *  Número de 0 a 10
 *
 */

class Nota
{
private:
    static const int LIMITE = 10;
    int nota;
    void validarNota(int);
public:

/// Permite informar um valor para nota, como inteiro
    void setNota(int);

/// Obtém o valor
    int getNota() const;
};

/// Retorna o valor de nota
inline int Nota::getNota() const
{
    return nota;
}

/*FIM declaracao classe dominio Nota  */


/*INICIO declaracao classe dominio Pais  */
/**
 *  @brief Declaração da classe Pais
 *  @author Thiago Pereira de Castro - 190131497
 *  @section Descrição
 *  Armazena um país
 *  @subsection Formato
 *  Um entre os seguintes países: Estados Unidos, Brasil, China, Coreia do Sul,
 *  Emirados, Franca, India, Japao, Malasia, Reino Unido, Tailandia, Turquia.
 *
 */

class Pais
{
private:
    string pais;
    void validarPais(string);
public:

/// Permite informar um valor para país, como string
    void setPais(string);

/// Obtém o valor
    string getPais();
};

/// Retorna o valor de país
inline string Pais::getPais()
{
    return pais;
}
/*FIM declaracao classe dominio Pais  */


/*INICIO declaracao classe dominio Codigo  */
/**
 *  @brief Declração da classe Codigo
 *  @author Thiago Pereira de Castro - 190131497
 *  @section Descrição
 *  Armazena um código
 *  @subsection Formato
 *  DDDDDDDDDDX, onde D é dígito(0-9) e X dígito verificador via algoritmo de Luhn
 */

class Codigo
{
private:
    string codigo;
    void validarCodigo(string);
public:

/// Permite informar um valor para codigo, como string
    void setCodigo(string);

/// Obtém o valor
    string getCodigo();
};

/// Retorna o valor do codigo
inline string Codigo::getCodigo()
{
    return codigo;
}
/*FIM declaracao classe dominio CODIGO  */

#endif // DOMINIOS_H

