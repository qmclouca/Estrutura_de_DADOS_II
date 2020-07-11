#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    typedef struct {
        char codCvm; //CODIGO CVM
        char cnpj; //CNPJ
        char denSoc; //DENOMINACAO SOCIAL
        char denCom; //COMERCIAL
        char datReg; //DATA DO REGISTRO
        char datConst; //DATA DA CONSTITUICAO
        char datCancel; //DATA DO CANCELAMENTO
        char motCancel; //MOTIVO DO CANCELAMENTO
        char sit; //SITUACAO
        char inisit; //INÍCIO DA SITUAÇÃO
        char setatividade; //SETOR DE ATIVIDADE
        char tipomerc; //TIPO DE MERCADO
        char catreg; //CATEGORIA DO REGISTRO
        char datinicat; //DATA INICIAL DA CATEGORIA
        char sitemissor; //SITUAÇÃO DO EMISSOR
        char datinisitemissor; //DATA INICIAL DA SITUAÇÃO DO EMISSOR
        char tipoend; //TIPO DE ENDEREÇO
        char logradouro; //LOGRADOURO
        char complemento; //COMPLEMENTO
        char bairro; //bairro
        char municipio; //municipio
        char uf; //UF
        char pais; //PAIS
        char cep; //cep
        char dddtel; //DDD DO TELEFONE
        char tel; //telefone
        char dddfax; //DDD do fax
        char fax; //fax
        char email; //email
        char tiporesp; //TIPO DE RESPONSÁVEL
        char nomeresp; //NOME DO RESPONSÁVEL
        char datiniresp; //DATA INICIAL DO RESPONSÁVEL
        char logresp; //LOGRADOURO DO RESPONSÁVEL
        char compresp; //COMPLEMENTO DO RESPONSÁVEL
        char bairroresp; //bairro do responsável
        char munresp; //MUNICÍPIO DO RESPONSÁVEL
        char ufresp; //UF do RESPONSÁVEL
        char paisresp; //PAIS DO RESPONSÁVEL
        char cepresp; //CEP RESPONSÁVEL
        char dddresp; //DDD do telefone do responsável
        char telresp; //telefone do responsável
        char dddfaxresp; //ddd do fax do responsável
        char faxresp; //número do fax do responsável
        char emailresp; //email do responsável
        char cnpjauditor; //CNPJ auditor
        char auditor; //nome do auditor
    }valores;

    valores dados; //instância uma variável display do tipo valores

    char mark = 0;
    char buf[200];
    int coluna = 0;

   dados.codCvm = 0;
    FILE *fileopen = fopen("F:\\CVM_CIA_ABERTAS.csv", "r"); //abre arquivo no modo leitura e escrita e seta o ponteiro do arquivo para sua primeira posição
    if (!fileopen){   //Se !fileopen = TRUE ou seja o arquivo não foi aberto
        printf("Não foi possível abrir o arquivo! \n");
        return 0;
    } else {printf("Aquivo .csv aberto!\n");}

    while (1) {

        // lê o arquivo e grava na variável adequada

        for (int y = 0; y < 42; y++){
            for(int x=0; mark != ';'; x++) {
                coluna = coluna++;
                mark = fgetc(fileopen);
                printf("%c", mark);
            }
        }

        // verifica se o arquivo acabou
        if (feof(fileopen))
            break;

    }
    fclose(fileopen);
    printf("O arquivo .CSV foi fechado.");
    return 0;
}


