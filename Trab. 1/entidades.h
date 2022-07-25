/**
 * @file entidades.h
 * @brief Arquivo com a declaração das classes das Entidades
 *
 */

#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

/*INICIO declaracao classe entidade USUARIO */
/**
 *  @brief Declaração da classe da entidade Usuario
 *  @author Bruno dos Santos Gomes - 180098845
 *  @section Descrição
 *  Armazena os dados do usuário, sendo eles, instâncias das classes dos domínios:
 *  Nome, Email, Senha, Idioma, Data e Descricao
 *
 */

class Usuario
{
private:
    Nome nome;
    Email email;
    Senha senha;
    Idioma idioma;
    Data aniversario;
    Descricao descricao;
public:
    void setNome(const Nome&);
    Nome getNome() const;
    void setEmail(const Email&);
    Email getEmail() const;
    void setSenha(const Senha&);
    Senha getSenha() const;
    void setIdioma(const Idioma&);
    Idioma getIdioma() const;
    void setData(const Data&);
    Data getData() const;
    void setDescricao(const Descricao&);
    Descricao getDescricao() const;
};

/// Método para informar um valor para nome
inline void Usuario::setNome(const Nome& nome)
{
    this->nome = nome;
}
/// Método para recuperar o valor de nome
inline Nome Usuario::getNome() const
{
    return nome;
}

/// Método para informar um valor para email
inline void Usuario::setEmail(const Email& email)
{
    this->email = email;
}
/// Método para recuperar o valor de email
inline Email Usuario::getEmail() const
{
    return email;
}

/// Método para informar um valor para senha
inline void Usuario::setSenha(const Senha& senha)
{
    this->senha = senha;
}
/// Método para recuperar o valor de senha
inline Senha Usuario::getSenha() const
{
    return senha;
}

/// Método para informar um valor para Senha
inline void Usuario::setIdioma(const Idioma& idioma)
{
    this->idioma = idioma;
}
/// Método para recuperar o valor de idioma
inline Idioma Usuario::getIdioma() const
{
    return idioma;
}

/// Método para informar um valor para aniversario
inline void Usuario::setData(const Data& aniversario)
{
    this->aniversario = aniversario;
}
/// Método para recuperar o valor de aniversario
inline Data Usuario::getData() const
{
    return aniversario;
}

/// Método para informar um valor para descricao
inline void Usuario::setDescricao(const Descricao& descricao)
{
    this->descricao = descricao;
}
/// Método para recuperar o valor de descricao
inline Descricao Usuario::getDescricao() const
{
    return descricao;
}
/*FIM declaracao classe entidade USUARIO  */

/* ============================================= */

/* INICIO declaracao classe entidade HOSPEDAGEM */
/**
 *  @brief Declaração da classe da entidade Hospedagem
 *  @author Bruno dos Santos Gomes - 180098845
 *  @section Descrição
 *  Armazena os dados da hospedagem, sendo eles, instâncias das classes dos domínios:
 *  Codigo, Cidade, Pais, Nota e Descricao
 *
 */


class Hospedagem
{
private:
    Codigo codigo;
    Cidade cidade;
    Pais pais;
    Nota nota;
    Descricao descricao;
public:
    void setCodigo(const Codigo&);
    Codigo getCodigo() const;
    void setCidade(const Cidade&);
    Cidade getCidade() const;
    void setPais(const Pais&);
    Pais getPais() const;
    void setNota(const Nota&);
    Nota getNota () const;
    void setDescricao(const Descricao&);
    Descricao getDescricao() const;
};

/// Método para informar um valor para codigo
inline void Hospedagem::setCodigo(const Codigo& codigo)
{
    this->codigo = codigo;
}
/// Método para recuperar o valor de codigo
inline Codigo Hospedagem::getCodigo() const
{
    return codigo;
}

/// Método para informar um valor para cidade
inline void Hospedagem::setCidade(const Cidade& cidade)
{
    this->cidade = cidade;
}
/// Método para recuperar o valor de cidade
inline Cidade Hospedagem::getCidade() const
{
    return cidade;
}

/// Método para informar um valor para pais
inline void Hospedagem::setPais(const Pais& pais)
{
    this->pais = pais;
}
/// Método para recuperar o valor de pais
inline Pais Hospedagem::getPais() const
{
    return pais;
}

/// Método para informar um valor para nota
inline void Hospedagem::setNota(const Nota& nota)
{
    this->nota = nota;
}
/// Método para recuperar o valor de nota
inline Nota Hospedagem::getNota() const
{
    return nota;
}

/// Método para informar um valor para descricao
inline void Hospedagem::setDescricao(const Descricao& descricao)
{
    this->descricao = descricao;
}
/// Método para recuperar o valor de descricao
inline Descricao Hospedagem::getDescricao() const
{
    return descricao;
}

/* FIM declaracao classe entidade HOSPEDAGEM  */

/* ============================================= */

/* INICIO declaracao classe entidade AVALIACAO */

/**
 *  @brief Declaração da classe da entidade Avaliacao
 *  @author Bruno dos Santos Gomes - 180098845
 *  @section Descrição
 *  Armazena os dados da avaliação, sendo eles, instâncias das classes dos domínios:
 *  Codigo, Nota e Descricao
 *
 */

class Avaliacao
{
private:
    Codigo codigo;
    Nota nota;
    Descricao descricao;
public:
    void setCodigo(const Codigo&);
    Codigo getCodigo() const;
    void setNota(const Nota&);
    Nota getNota () const;
    void setDescricao(const Descricao&);
    Descricao getDescricao() const;
};

/// Método para informar um valor para codigo
inline void Avaliacao::setCodigo(const Codigo& codigo)
{
    this->codigo = codigo;
}
/// Método para recuperar o valor de codigo
inline Codigo Avaliacao::getCodigo() const
{
    return codigo;
}

/// Método para informar um valor para nota
inline void Avaliacao::setNota(const Nota& nota)
{
    this->nota = nota;
}
/// Método para recuperar o valor de nota
inline Nota Avaliacao::getNota() const
{
    return nota;
}

/// Método para informar um valor para descricao
inline void Avaliacao::setDescricao(const Descricao& descricao)
{
    this->descricao = descricao;
}
/// Método para recuperar o valor de descricao
inline Descricao Avaliacao::getDescricao() const
{
    return descricao;
}

/*FIM declaracao classe entidade AVALIACAO  */

#endif // ENTIDADES_H_INCLUDED

