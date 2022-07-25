/**
 * @file dominios.cpp
 * @brief Arquivo com a implementação dos métodos das classes dos Domínios
 * @section Descrição
 * Contém as definições e validações das classes dos Domínios
 *
 */


#include "dominios.h"

/* INICIO DA IMPLEMENTACAO da classe Cidade */
/**
 * @author Danillo Danie da Costa Almeida - 221004034
 *
 */

void Cidade::validarCidade(string nomeCidadeEntrada)
{
    string cidadeOK = "nao";
    string listaDeCidade[19] =
    {
        "Antalia"
        , "Bangkok"
        , "Delhi"
        , "Dubai"
        , "Hong Kong"
        , "Londres"
        , "Macau"
        , "Mumbai"
        , "Paris"
        , "Rio de Janeiro"
        , "Sao Paulo"
        , "Seul"
        , "Istambul"
        , "Kuala Lumpur"
        , "Nova Iorque"
        , "Osaka"
        , "Phuket"
        , "Shenzhen"
        , "Toquio"
    };

    for (int i=0 ; i<19; i++)
    {
        if (nomeCidadeEntrada == listaDeCidade[i])
        {
            cidadeOK = "sim";
        }
    }
    if (cidadeOK == "nao")
    {
        throw invalid_argument("Argumento invalido, cidade incorreta.");
    }
}

void Cidade::setCidade (string nomeCidadeEntrada)
{
    validarCidade(nomeCidadeEntrada);
    this->cidade=nomeCidadeEntrada;
}

/* FIM DA IMPLEMENTACAO da classe Cidade */
/* ============================================ */
/* INICIO DA IMPLEMENTACAO da classe Descricao */
/**
 * @author Danillo Danie da Costa Almeida - 221004034
 *
 */

void Descricao::validarDescricao(string descricaoEntrada)
{
    int const TAMANHO_DESCRICAO = 40; //parametriza o tamenho da Descricao
    string estouro = "nao";
    string caracterInvalido = "NAO";
    /* 0 A 40 CARACTERES
       NAO HA ESPACOS EM BRANCO EM SEQUENCIA
       NAO HA CARACTERES DE PONTUACAO (. , ; : ? !)EM SEQUENCIA
    */
    if (descricaoEntrada.length() > TAMANHO_DESCRICAO)
    {
        estouro = "sim";
    }

    for (int i=0; i <= TAMANHO_DESCRICAO; i++)
    {
        // valida espaços em branco em sequência
        if (descricaoEntrada[i] == ' ' && descricaoEntrada[i+1] == ' ')
        {
            caracterInvalido = "sim";
        }
        //valida (. , ; : ? !) em sequência
        if (descricaoEntrada[i] == '.' ||
                descricaoEntrada[i] == ',' ||
                descricaoEntrada[i] == ';' ||
                descricaoEntrada[i] == ':' ||
                descricaoEntrada[i] == '?' ||
                descricaoEntrada[i] == '!')
        {
            if (descricaoEntrada[i+1] == '.' ||
                    descricaoEntrada[i+1] == ',' ||
                    descricaoEntrada[i+1] == ';' ||
                    descricaoEntrada[i+1] == ':' ||
                    descricaoEntrada[i+1] == '?' ||
                    descricaoEntrada[i+1] == '!')
            {
                caracterInvalido = "sim";
            }
        }
    }
    if (estouro == "sim" || caracterInvalido == "sim" )
    {
        throw invalid_argument("Argumento invalido, descrição incorreta.");
    }
}
void Descricao::setDescricao (string descricaoEntrada)
{
    validarDescricao(descricaoEntrada);
    this->descricao=descricaoEntrada;
}

/* FIM DA IMPLEMENTACAO da classe Descricao */
/* ============================================ */
/* INICIO DA IMPLEMENTACAO da classe Email */
/**
 * @author Danillo Danie da Costa Almeida - 221004034
 *
 */

void Email::validarEmail(string emailEntrada)
{

    string maiusculo = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string minusculo = "abcdefghijklmnopqrstuvwxyz";
    string numero    = "12345678901234567890123456"; //repeticao para manter
    //  arrays do mesmo tamanho
    string arroba = "@";
    string especial = "._-";
    string emailInvalido = "nao";
    string motivoInvalido = "   ";
    int maxParteLocal = 64;
    int maxDominio = 63;
    int posicaoArroba = 0;
    int tamanhoEmail = 0;

    int qtdArroba = 0;
    tamanhoEmail = emailEntrada.length();
//VALIDA INICIO -----------------------------------------------------------------
    if (emailEntrada[0] == '.')
    {
        emailInvalido = "sim";
        motivoInvalido = "PONTO NO INICIO";

        throw invalid_argument("Argumento invalido, pontuação no inicio.");
    }
    if (emailEntrada[0] == '@')
    {
        emailInvalido = "sim";
        motivoInvalido = "ARROBA NO INICIO";

    }
    if (emailEntrada[0] == '-' || emailEntrada[0] == '_' )
    {
        for (int i=0; i<26 ; i++)
        {
            if (emailEntrada[1] == maiusculo[i]
                    || emailEntrada[1] == minusculo[i]
                    || emailEntrada[1] == numero[i])
            {
                emailInvalido = "nao";
                break;
            }
            else
            {
                emailInvalido = "sim";
                motivoInvalido = "segundo diferente de letra-numero";
            }
        }
        if (emailInvalido == "sim")
        {

            throw invalid_argument("Argumento invalido, não é um alfanumérico.");

        }
    }
// FIM VALIDA INICIO ------------------------------------------------------------

// VALIDA CARACTERES PERMITIDOS: a-z, A-Z, 0-9, _, -, . @ -----------------------
    for (int i = 0; i<tamanhoEmail; i++)
    {
        emailInvalido = "sim";
        for (int j=0; j<26; j++)
        {
            if (emailEntrada[i] == maiusculo[j]
                    || emailEntrada[i] == minusculo[j]
                    || emailEntrada[i] == numero[j]
                    || emailEntrada[i] == '.'
                    || emailEntrada[i] == '-'
                    || emailEntrada[i] == '_'
                    || emailEntrada[i] == '@')

            {
                emailInvalido = "nao";
                break;
            }
        }
        if (emailInvalido == "sim")
        {
            motivoInvalido = "caractere invalido";

            throw invalid_argument("Argumento invalido, caracteres invalidos.");

        }
    }
// FIM VALIDA CARACTERES  PERMITIDOS: a-z, A-Z, 0-9, " ", -, . --------------------

// VALIDA @ ---------------------------------------------------------------------
    for (int i=0; i<tamanhoEmail ; i++)
    {
        if (emailEntrada[i] == '@')
        {
            emailInvalido = "nao";
            posicaoArroba = i;
            break;
        }
        else
        {
            emailInvalido = "sim";
        }
    }
    if (emailInvalido == "sim")
    {

        motivoInvalido = "sem @";

        throw invalid_argument("Argumento invalido, não possui '@'.");

    }
// FIM VALIDA @ -----------------------------------------------------------------

// VALIDA MAIS DE UM @ ----------------------------------------------------------
    for (int i=0; i<tamanhoEmail ; i++)
    {
        if (emailEntrada[i] == '@')
        {
            qtdArroba++;
        }
    }
    if (qtdArroba > 1)
    {

        emailInvalido = "sim";
        motivoInvalido = "MAIS DE UM @";

        throw invalid_argument("Argumento invalido, mais de um '@'.");

    }
// FIM VALIDA MAIS DE UM @ ------------------------------------------------------

// VALIDA TAMANHO DA PARTE-LOCAL (64 CARACTERES) --------------------------------
    if (posicaoArroba > maxParteLocal)
    {
        emailInvalido = "sim";
        motivoInvalido = "parte local excede o tamnho";

        throw invalid_argument("Argumento invalido, parte local muito grande.");

    }
// FIM VALIDA TAMANHO DA PARTE-LOCAL --------------------------------------------

// VALIDA DOMINIO ---------------------------------------------------------------
    if (emailEntrada[posicaoArroba+1] == '.'
            || emailEntrada[posicaoArroba+1] == '-')
    {
        emailInvalido = "sim";
        motivoInvalido = "\n. ou - apos o arroba";

        throw invalid_argument("Argumento invalido, caracteres invalidos após o arroba.");

    }
    if (emailEntrada[tamanhoEmail-1] == '-'
            || (emailEntrada[tamanhoEmail-1] == '.'))
    {
        emailInvalido = "sim";
        motivoInvalido = "\n - ou . no final do dominio";

        throw invalid_argument("Argumento invalido, caracteres invalidos no final do dominio.");

    }
    if ((tamanhoEmail - posicaoArroba) > maxDominio)
    {
        emailInvalido = "sim";
        motivoInvalido = "\n dominio excede tamanho maximo";

        throw invalid_argument("Argumento invalido, dominio muito grande.");

    }
}
// FIM VALIDA DOMINIO -----------------------------------------------------------
void Email::setEmail (string emailEntrada)
{
    validarEmail(emailEntrada);
    this->email=emailEntrada;
}

/* FIM DA IMPLEMENTACAO da classe Email */
/* ============================================ */
/* INICIO DA IMPLEMENTACAO da classe Nome */
/**
 * @author Danillo Danie da Costa Almeida - 221004034
 *
 */

void Nome::setNome (string nomeEntrada)
{
    validarNome(nomeEntrada);
    this->nome=nomeEntrada;
}

void Nome::validarNome(string nomeEntrada)
{
    int tamanhoNome = 0;
    string alfabetoMinusculo = "abcdefghijklmnopqrstuvwxyz";
    string alfabetoMaiusculo = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    const static int MAX_TAMANHO_NOME = 30;
    string achouValido="nao";
    int inicioSobrenome = 0;
    int inicioProxSobrenome = 0;

    tamanhoNome = nomeEntrada.length();
    /* VALIDA TAMANHO MAXIMO ----------------------------------------------------- */
    if (tamanhoNome > MAX_TAMANHO_NOME)
    {
        throw invalid_argument("Argumento invalido: EXCEDE O TAMANHO MAXIMO!!!");
    }
    /* FIM VALIDA TAMANHO MAXIMO ------------------------------------------------- */

    /* VALIDA VALIDA ESPAÇO EM BRANCO EM SEQUENCIA ------------------------------- */
    for (int i = 0; i<tamanhoNome; i++)
    {
        if (nomeEntrada[i] == ' ')
        {
            if (nomeEntrada[i+1] == ' ')
            {
                throw invalid_argument("Argumento invalido: ESPACO EM SEQUNCIA!");
            }
        }
    }
    /* FIM VALIDA ESPAÇO EM BRANCO EM SEQUENCIA ---------------------------------- */

    /* VALIDA CARACTERE INVALIDO ------------------------------------------------- */
    for (int i = 0; i<tamanhoNome; i++)
    {
        string achouValido = "nao";
        for (int j=0; j<36; j++)
        {
            if (nomeEntrada[i] == alfabetoMaiusculo[j]
                    || nomeEntrada[i] ==  alfabetoMinusculo[j]
                    || nomeEntrada[i] ==' ')
            {
                achouValido="sim";
                break;
            }
            else
            {
                achouValido="nao";
            }
        }
        if (achouValido == "nao")
        {
            throw invalid_argument("Argumento invalido:CARACTER INVALIDO!");
        }
    }

    /* FIM VALIDA CARACTERE INVALIDO --------------------------------------------- */

    /* VALIDA PRIMEIRO CARACTERE MAIUSCULO --------------------------------------- */
    achouValido="nao";
    for (int i = 0; i<36; i++)
    {
        if (nomeEntrada[0] ==  alfabetoMaiusculo[i])
        {
            achouValido="sim";
            break;
        }
        else
        {
            achouValido="nao";
        }
    }
    if (achouValido == "nao")
    {
        throw invalid_argument
        ("Argumento invalido: NOME NAO COMECA COM MAIUSCULO");
    }
    /* FIM VALIDA PRIMEIRO CARACTERE MAIUSCULO ----------------------------------- */


    /* VALIDA CARACTERE MAIUSCULO EM SOBRENOME ----------------------------------- */
    achouValido="nao";
    for (int i = 0; i<(nomeEntrada.length()-3); i++)
    {
        if (nomeEntrada[i] == ' '
                && nomeEntrada[i+1] != ' '
                && nomeEntrada[i+2] != ' '
                && nomeEntrada[i+3] != ' '
                && nomeEntrada[i+4] != ' ')
        {
            inicioSobrenome = i+1;
            achouValido="nao";
            for (int j = 0; j<36; j++)
            {
                if (nomeEntrada[i+1] ==  alfabetoMaiusculo[j])
                {
                    achouValido="sim";
                    break;
                }
                else
                {
                    achouValido="nao";
                }
            }
            if (achouValido == "nao")
            {
                throw invalid_argument
                ("Argumento invalido: SOBRENOME NAO COMECA COM MAIUSCULO");
            }
        }
    }
    /* FIM VALIDA CARACTERE MAIUSCULO EM SOBRENOME ------------------------------- */

    /* VALIDA CARACTERE MAIUSCULO NO RESTO DO NOME ------------------------------- */
    for (int i = 1; i<tamanhoNome; i++)
    {
        if(nomeEntrada[i] == ' '
                && nomeEntrada[i+1] != ' '
                && nomeEntrada[i+2] != ' '
                && nomeEntrada[i+3] != ' '
                && nomeEntrada[i+4] != ' ')
        {
            inicioSobrenome = i+1;
            break;
        }
    }
    for (int i = 1; i<inicioSobrenome-1; i++)
    {
        achouValido="nao";
        for (int j = 0; j<36; j++)
        {
            if (nomeEntrada[i] ==  alfabetoMinusculo[j])
            {
                achouValido="sim";
                break;
            }
            else
            {
                achouValido="nao";
            }
        }
        if (achouValido == "nao")
        {
            throw invalid_argument
            ("Argumento invalido: RESTO NOME CONTEM MAIUSCULO");
        }
    }
    /* FIM VALIDA CARACTERE MAIUSCULO NO RESTO DO NOME --------------------------- */

    /* VALIDA CARACTERE MAIUSCULO NO RESTO DO SOBRENOME -------------------------- */
    for (int i = 1; i<tamanhoNome; i++)
    {
        if(nomeEntrada[i] == ' '
                && nomeEntrada[i+1] != ' '
                && nomeEntrada[i+2] != ' '
                && nomeEntrada[i+3] != ' '
                && nomeEntrada[i+4] != ' ')
        {
            inicioSobrenome = i+1;
            //achando final do sobrenome (inicio do proximo sobrenome)
            for (int m = inicioSobrenome; m<tamanhoNome; m++)
            {
                if(nomeEntrada[m] == ' '
                        && nomeEntrada[m+1] != ' '
                        && nomeEntrada[m+2] != ' '
                        && nomeEntrada[m+3] != ' '
                        && nomeEntrada[m+4] != ' '
                        || m==tamanhoNome-1)
                {
                    inicioProxSobrenome = m+1;
                    break;
                }
            }
            //fim achando final do sobrenome (inicio do proximo sobrenome)
            for (int j = inicioSobrenome+1; j<inicioProxSobrenome-1; j++)
            {
                achouValido="nao";
                for (int k = 0; k<36; k++)
                {
                    if (nomeEntrada[j] ==  alfabetoMinusculo[k])
                    {
                        achouValido="sim";
                        break;
                    }
                    else
                    {
                        achouValido="nao";
                    }
                }
            }
            if (achouValido == "nao")
            {
                throw invalid_argument
                ("Argumento invalido: RESTO SOBRE NOMENOME CONTEM MAIUSCULO");
            }
        }
    }
    /* FIM VALIDA CARACTERE MAIUSCULO NO RESTO DO SOBRENOME ---------------------- */
}

/* FIM DA IMPLEMENTACAO da classe Nome */
/* ============================================ */
/* INICIO DA IMPLEMENTACAO da classe Idioma */
/**
 * @author Bruno dos Santos Gomes - 180098845
 *
 */

void Idioma::validarIdioma(string idiomaEntrada)
{
    string idiomaOK = "nao";
    string listaIdiomas[10] =
    {
        "Ingles",
        "Chines Mandarim",
        "Hindi",
        "Espanhol",
        "Frances",
        "Arabe",
        "Bengali",
        "Russo",
        "Portugues",
        "Indonesio"
    };
    for(int i = 0; i < 10; i++)
    {
        if(idiomaEntrada == listaIdiomas[i])
        {
            idiomaOK = "sim";
        }
    }
    if (idiomaOK == "nao")
    {
        throw invalid_argument("Argumento inválido, idioma incorreto.");
    }


}

void Idioma::setIdioma(string idiomaEntrada)
{
    validarIdioma(idiomaEntrada);
    this->idioma = idiomaEntrada;
}

/* FIM DA IMPLEMENTACAO da classe Idioma */
/* ============================================ */
/* INICIO DA IMPLEMENTACAO da classe Senha */
/**
 * @author Bruno dos Santos Gomes - 180098845
 *
 */

void Senha::validarSenha(string senhaEntrada)
{

    const int TAMANHO = 5; // tamanho máximo do parâmetro senha

    if(senhaEntrada.size() != TAMANHO)
    {
        throw invalid_argument("Senha invalida, tamanho incorreto");
    }
    for(int i = 0; i < senhaEntrada.size(); i++)
    {
        if(isalnum(senhaEntrada[i]) == false) // checa se é uma letra(A-Z ou a-z) ou um número (0-9)
        {
            if(senhaEntrada[i] != '!' &&  senhaEntrada[i] != '#' && senhaEntrada[i] != '$' && senhaEntrada[i] != '%' && senhaEntrada[i] != '&') // checa se possui caractere válido
            {
                throw invalid_argument("Senha invalida, possui caractere invalido.");
            }

        }
    }
// checa se tem pelo menos uma letra, um número e um caractere
    bool tem_letra = false;
    bool tem_numero = false;
    bool tem_caractere = false;

    for(int x = 0; x < senhaEntrada.size(); x++)
    {
        if(isalpha(senhaEntrada[x]) == true) // checa se tem letra
        {
            tem_letra = true;
        }
        if(isdigit(senhaEntrada[x]) == true) // checa se tem dígito numérico
        {
            tem_numero = true;
        }
        if(senhaEntrada[x] == '!' || senhaEntrada[x] == '#' || senhaEntrada[x] == '$' || senhaEntrada[x] == '%' || senhaEntrada[x] == '&') // checa se tem caractere
        {
            tem_caractere = true;
        }

    }

    if(tem_letra == false)
    {
        throw invalid_argument("Senha invalida, nao tem letra");
    }

    if(tem_numero == false)
    {
        throw invalid_argument("Senha invalida, nao tem numero");
    }

    if(tem_caractere == false)
    {
        throw invalid_argument("Senha invalida, nao tem caractere especial");
    }

}

void Senha::setSenha(string senhaEntrada)
{
    validarSenha(senhaEntrada);
    this->senha = senhaEntrada;
}

/* FIM DA IMPLEMENTACAO da classe Senha */
/* ============================================ */
/* INICIO DA IMPLEMENTACAO da classe Data */
/**
 * @author Bruno dos Santos Gomes - 180098845
 *
 */

void Data::validarData (string dataEntrada)
{
    const int TAMANHO_MAX = 6;
    string valorMeses[12] = {"Jan","Fev","Mar","Abr","Mai","Jun","Jul","Ago","Set","Out","Nov","Dez"};

    //verififica tamanho da data
    if(dataEntrada.size() != TAMANHO_MAX )
    {
        throw invalid_argument("Data invalida, o formato deve ser DD/Mes");
    }

    //verifica o separador barra
    if(dataEntrada[2] != '/')
    {
        throw invalid_argument("Formato de data invalido, o formato precisa ser DD/Mes");
    }

    // verifica o DD e o Mes
    string dia,mes;
    int diaInt;
    bool flag = false;

    dia = dataEntrada.substr(0, 2);
    mes = dataEntrada.substr(3, 3);

    diaInt = stoi(dia); //convertendo string do dia para int

    // verificando tratamento dos dias

    if(diaInt < 1 || diaInt > 31)
    {
        throw invalid_argument("Data invalida. Apenas dias entre 01 e 31 são válidos");
    }

    // verificando tratamento dos meses

    for(int i = 0; i < 12; i++)
    {
        if(mes == valorMeses[i])
        {
            flag = true;
        }
    }

    if(!(flag))
    {
        throw invalid_argument("Data invalida. O mes ta incorreto ou nao existe");
    }

}

void Data::setData(string dataEntrada)
{
    validarData(dataEntrada);
    this->data = dataEntrada;
}
/* FIM DA IMPLEMENTACAO da classe Data */
/* ============================================ */
/* INICIO DA IMPLEMENTACAO da classe Nota */
/**
 * @author Thiago Pereira de Castro - 190131497
 *
 */
void Nota::validarNota(int nota)
{
    if (nota > LIMITE || nota < 0)
        throw invalid_argument("Argumento invalido, nota fora dos limites.");
}

void Nota::setNota(int nota)
{
    validarNota(nota);
    this->nota = nota;
}

/* FIM DA IMPLEMENTACAO classe Nota */
/* ============================================ */
/* INICIO DA IMPLEMENTACAO classe Pais */
/**
 * @author Thiago Pereira de Castro - 190131497
 *
 */
void Pais::validarPais(string paisEntrada)
{
    string PaisOK = "nao";
    string listaDePais[12] =
    {
        "Estados Unidos"
        , "Brasil"
        , "China"
        , "Coreia do Sul"
        , "Emirados"
        , "Franca"
        , "India"
        , "Japao"
        , "Malasia"
        , "Reino Unido"
        , "Tailandia"
        , "Turquia"
    };

    for (int i=0 ; i<12; i++)
    {
        if (paisEntrada == listaDePais[i])
        {
            PaisOK = "sim";
        }
    }
    if (PaisOK == "nao")
    {
        throw invalid_argument("Argumento invalido, país inválido.");
    }
}

void Pais::setPais (string paisEntrada)
{
    validarPais(paisEntrada);
    this->pais = paisEntrada;
}

/* FIM DA IMPLEMENTACAO da classe Pais */
/* ============================================ */
/* INICIO DA IMPLEMENTACAO da classe Codigo */
/**
 * @author Thiago Pereira de Castro - 190131497
 *
 */

void Codigo::validarCodigo(string codigoEntrada)
{

    if(codigoEntrada.length() != 11)
    {
        throw invalid_argument("Argumento invalido, tamanho inválido.");
    }
    else
    {
        /*Se o caractere da posicao 10 for diferente do digito verificador entao apresenta erro */

        int numero;
        int digitos = codigoEntrada.length();
        int indicepenultimo = digitos - 2;
        int soma = 0;
        int somadivisivelpordez = false;
        string numerotemporario;

        for (int i = indicepenultimo; i >= 0; i--)
        {
            numerotemporario = codigoEntrada[i];
            numero = std::stoi(numerotemporario);
            numero = numero + numero;


            if(numero > 9)
            {
                numero = numero - 9;
            }
            soma = soma + numero;

            i = i - 1;
        }

        indicepenultimo = indicepenultimo - 1;
        for (int i = indicepenultimo; i >= 0; i--)
        {
            numerotemporario = codigoEntrada[i];
            numero = std::stoi(numerotemporario);

            if(numero > 9)
            {
                numero = numero - 9;
            }
            soma = soma + numero;

            i = i - 1;
        }

        numerotemporario = codigoEntrada[(digitos - 1)];
        numero = std::stoi(numerotemporario);
        soma = soma + numero;


        if (soma % 10 == 0)
        {
            somadivisivelpordez = true;
        }


        if(somadivisivelpordez == true)
        {
            //cout << "\nCODIGO VALIDO\n" << endl;
        }
        else
        {
            //cout << "\nCODIGO INVALIDO\n" << endl;
            throw invalid_argument("Argumento invalido, nao é divisível por dez.");
        }

    }
}
void Codigo::setCodigo (string codigo)
{
    validarCodigo(codigo);
    this->codigo = codigo;
}

/* FIM DA IMPLEMENTACAO da classe Codigo */

