/**
 * @file testes.cpp
 * @brief Arquivo com a implementação dos testes de unidades das classes de domínios e entidades
 *
 */

#include "testes.h"

/* ==========================================================*/

/* IMPLEMENTAÇÕES DOS MÉTODOS DE TESTES UNITÁRIOS DAS CLASSES DOS DOMÍNIOS */

/* ==========================================================*/

/*INICIO teste unitario da classe Cidade */
/**
 * @brief Implementação da classe de teste unitário para a classe Cidade
 * @author Danillo Danie da Costa Almeida - 221004034
 */
void TUCidade::setUp()
{
    cidade = new Cidade();
    estado = SUCESSO;
}

void TUCidade::tearDown()
{
    delete cidade;
}

void TUCidade::testarCenarioSucesso()
{
    try
    {
        cidade->setCidade(valorValido);
        if (cidade->getCidade() != valorValido)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUCidade::testarCenarioFalha()
{
    try
    {
        cidade->setCidade(valorInvalido);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (cidade->getCidade() == valorInvalido)
            estado = FALHA;
    }
}

int TUCidade::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/*FIM teste unitario da classe Cidade */

/*INICIO teste unitario da classe Descricao */
/**
 * @brief Implementação da classe de teste unitário para a classe Descrição
 * @author Danillo Danie da Costa Almeida - 221004034
 */

void TUDescricao::setUp()
{
    descricao = new Descricao();
    estado = SUCESSO;
}

void TUDescricao::tearDown()
{
    delete descricao;
}

void TUDescricao::testarCenarioSucesso()
{
    try
    {
        descricao->setDescricao (valorValido);
        if (descricao->getDescricao() != valorValido)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUDescricao::testarCenarioFalha()
{
    try
    {
        descricao->setDescricao(valorInvalido);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (descricao->getDescricao() == valorInvalido)
            estado = FALHA;
    }
}

int TUDescricao::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
/*FIM teste unitario da classe Descricao */

/*INICIO teste unitario da classe Email */
/**
 * @brief Implementação da classe de teste unitário para a classe Email
 * @author Danillo Danie da Costa Almeida - 221004034
 */

void TUEmail::setUp()
{
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown()
{
    delete email;
}

void TUEmail::testarCenarioSucesso()
{
    try
    {
        email->setEmail (valorValido);
        if (email->getEmail() != valorValido)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha()
{
    try
    {
        email->setEmail(valorInvalido);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (email->getEmail() == valorInvalido)
            estado = FALHA;
    }
}

int TUEmail::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
/*FIM teste unitario da classe Email */

/*INICIO teste unitario da classe Nome */
/**
 * @brief Implementação da classe de teste unitário para a classe Nome
 * @author Danillo Danie da Costa Almeida - 221004034
 */

void TUNome::setUp()
{
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown()
{
    delete nome;
}

void TUNome::testarCenarioSucesso()
{
    try
    {
        nome->setNome (valorValido);
        if (nome->getNome() != valorValido)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha()
{
    try
    {
        nome->setNome(valorInvalido);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (nome->getNome() == valorInvalido)
            estado = FALHA;
    }
}

int TUNome::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/*FIM teste unitario da classe Nome */

/*INICIO teste unitario da classe Idioma */
/**
 * @brief Implementação da classe de teste unitário para a classe Idioma
 * @author Bruno dos Santos Gomes - 180098845
 */

void TUIdioma::setUp()
{
    idioma = new Idioma();
    estado = SUCESSO;
}

void TUIdioma::tearDown()
{
    delete idioma;
}

void TUIdioma::testarCenarioSucesso()
{
    try
    {
        idioma->setIdioma(valorValido);
        if (idioma->getIdioma() != valorValido)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUIdioma::testarCenarioFalha()
{
    try
    {
        idioma->setIdioma(valorInvalido);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (idioma->getIdioma() == valorInvalido)
            estado = FALHA;
    }
}

int TUIdioma::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
/*FIM teste unitario da classe Idioma */

/*INICIO teste unitario da classe Senha */
/**
 * @brief Implementação da classe de teste unitário para a classe Idioma
 * @author Bruno dos Santos Gomes - 180098845
 */

void TUSenha::setUp()
{
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown()
{
    delete senha;
}

void TUSenha::testarCenarioSucesso()
{
    try
    {
        senha->setSenha(valorValido);
        if (senha->getSenha() != valorValido)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha()
{
    try
    {
        senha->setSenha(valorInvalido);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (senha->getSenha() == valorInvalido)
            estado = FALHA;
    }
}

int TUSenha::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/*FIM teste unitario da classe Senha */

/*INICIO teste unitario da classe Data */
/**
 * @brief Implementação da classe de teste unitário para a classe Data
 * @author Bruno dos Santos Gomes - 180098845
 */
void TUData::setUp()
{
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown()
{
    delete data;
}

void TUData::testarCenarioSucesso()
{
    try
    {
        data->setData(valorValido);
        if (data->getData() != valorValido)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha()
{
    try
    {
        data->setData(valorInvalido);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (data->getData() == valorInvalido)
            estado = FALHA;
    }
}

int TUData::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
/*FIM teste unitario da classe Data*/

/*INICIO teste unitario da classe Nota */
/**
 * @brief Implementação da classe de teste unitário para a classe Data
 * @author Thiago Pereira de Castro - 190131497
 */

void TUNota::setUp()
{
    nota = new Nota();
    estado = SUCESSO;
}

void TUNota::tearDown()
{
    delete nota;
}

void TUNota::testarCenarioSucesso()
{
    try
    {
        nota->setNota(valorValido);
        if (nota->getNota() != valorValido)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUNota::testarCenarioFalha()
{
    try
    {
        nota->setNota(valorInvalido);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (nota->getNota() == valorInvalido)
            estado = FALHA;
    }
}

int TUNota::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}
/*FIM teste unitario da classe Nota */

/*INICIO teste unitario da classe País */
/**
 * @brief Implementação da classe de teste unitário para a classe Data
 * @author Thiago Pereira de Castro - 190131497
 */

void TUPais::setUp()
{
    pais = new Pais();
    estado = SUCESSO;
}

void TUPais::tearDown()
{
    delete pais;
}

void TUPais::testarCenarioSucesso()
{
    try
    {
        pais->setPais(valorValido);
        if (pais->getPais() != valorValido)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUPais::testarCenarioFalha()
{
    try
    {
        pais->setPais(valorInvalido);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (pais->getPais() == valorInvalido)
            estado = FALHA;
    }
}

int TUPais::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/*FIM teste unitario da classe País */

/*INICIO teste unitario da classe Codigo */
/**
 * @brief Implementação da classe de teste unitário para a classe Data
 * @author Thiago Pereira de Castro - 190131497
 */

void TUCodigo::setUp()
{
    codigo = new Codigo();
    estado = SUCESSO;
}

void TUCodigo::tearDown()
{
    delete codigo;
}

void TUCodigo::testarCenarioSucesso()
{
    try
    {
        codigo->setCodigo(valorValido);
        if (codigo->getCodigo() != valorValido)
            estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        estado = FALHA;
    }
}

void TUCodigo::testarCenarioFalha()
{
    try
    {
        codigo->setCodigo(valorInvalido);
        estado = FALHA;
    }
    catch(invalid_argument &excecao)
    {
        if (codigo->getCodigo() == valorInvalido)
            estado = FALHA;
    }
}

int TUCodigo::run()
{
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

/*FIM teste unitario da classe Codigo */

/* ==========================================================*/

/* IMPLEMENTAÇÕES DE MÉTODOS DOS TESTES UNITÁRIOS DAS CLASSES DE ENTIDADES */

/* ==========================================================*/

/*INICIO teste unitario da classe Usuario */
/**
 * @brief Implementação da classe de teste unitário para a classe Usuário
 * @author Bruno dos Santos Gomes - 180098845
 */

void TUUsuario::setUp()
{
    usuario = new Usuario();
    estado = SUCESSO;
}

void TUUsuario::tearDown()
{
    delete usuario;
}

void TUUsuario::testarCenarioSucesso()
{

    Nome nome;
    nome.setNome(NOME_VALIDO);
    usuario->setNome(nome);
    if(usuario->getNome().getNome() != NOME_VALIDO)
        estado = FALHA;

    Email email;
    email.setEmail(EMAIL_VALIDO);
    usuario->setEmail(email);
    if(usuario->getEmail().getEmail() != EMAIL_VALIDO)
        estado = FALHA;

    Senha senha;
    senha.setSenha(SENHA_VALIDA);
    usuario->setSenha(senha);
    if(usuario->getSenha().getSenha() != SENHA_VALIDA)
        estado = FALHA;

    Idioma idioma;
    idioma.setIdioma(IDIOMA_VALIDO);
    usuario->setIdioma(idioma);
    if(usuario->getIdioma().getIdioma() != IDIOMA_VALIDO)
        estado = FALHA;

    Data data;
    data.setData(DATA_VALIDA);
    usuario->setData(data);
    if(usuario->getData().getData() != DATA_VALIDA)
        estado = FALHA;

    Descricao descricao;
    descricao.setDescricao(DESCRICAO_VALIDA);
    usuario->setDescricao(descricao);
    if(usuario->getDescricao().getDescricao() != DESCRICAO_VALIDA)
        estado = FALHA;
}

int TUUsuario::run()
{
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

/*FIM teste unitario da classe Usuario */


/*INICIO teste unitario da classe Hospedagem */
/**
 * @brief Implementação da classe de teste unitário para a classe Hospedagem
 * @author Bruno dos Santos Gomes - 180098845
 */

void TUHospedagem::setUp()
{
    hospedagem = new Hospedagem();
    estado = SUCESSO;
}

void TUHospedagem::tearDown()
{
    delete hospedagem;
}

void TUHospedagem::testarCenarioSucesso()
{

    Codigo codigo;
    codigo.setCodigo(CODIGO_VALIDO);
    hospedagem->setCodigo(codigo);
    if(hospedagem->getCodigo().getCodigo() != CODIGO_VALIDO)
        estado = FALHA;

    Cidade cidade;
    cidade.setCidade(CIDADE_VALIDA);
    hospedagem->setCidade(cidade);
    if(hospedagem->getCidade().getCidade() != CIDADE_VALIDA)
        estado = FALHA;

    Pais pais;
    pais.setPais(PAIS_VALIDO);
    hospedagem->setPais(pais);
    if(hospedagem->getPais().getPais() != PAIS_VALIDO)
        estado = FALHA;

    Nota nota;
    nota.setNota(NOTA_VALIDA);
    hospedagem->setNota(nota);
    if(hospedagem->getNota().getNota() != NOTA_VALIDA)
        estado = FALHA;


    Descricao descricao;
    descricao.setDescricao(DESCRICAO_VALIDA);
    hospedagem->setDescricao(descricao);
    if(hospedagem->getDescricao().getDescricao() != DESCRICAO_VALIDA)
        estado = FALHA;
}

int TUHospedagem::run()
{
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

/*FIM teste unitario da classe Usuario */


/*INICIO teste unitario da classe Avaliação */
/**
 * @brief Implementação da classe de teste unitário para a classe Avaliação
 * @author Bruno dos Santos Gomes - 180098845
 */

void TUAvaliacao::setUp()
{
    avaliacao = new Avaliacao();
    estado = SUCESSO;
}

void TUAvaliacao::tearDown()
{
    delete avaliacao;
}

void TUAvaliacao::testarCenarioSucesso()
{

    Codigo codigo;
    codigo.setCodigo(CODIGO_VALIDO);
    avaliacao->setCodigo(codigo);
    if(avaliacao->getCodigo().getCodigo() != CODIGO_VALIDO)
        estado = FALHA;


    Nota nota;
    nota.setNota(NOTA_VALIDA);
    avaliacao->setNota(nota);
    if(avaliacao->getNota().getNota() != NOTA_VALIDA)
        estado = FALHA;


    Descricao descricao;
    descricao.setDescricao(DESCRICAO_VALIDA);
    avaliacao->setDescricao(descricao);
    if(avaliacao->getDescricao().getDescricao() != DESCRICAO_VALIDA)
        estado = FALHA;
}

int TUAvaliacao::run()
{
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

/*FIM teste unitario da classe Avaliação */

