#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 200

char nome [SIZE] [50];
char email [SIZE] [50];
char endereco [SIZE] [50];
char modelo [SIZE] [50];
char marca [SIZE] [50];
int placa [SIZE] [50];
int telefone [SIZE] [50];
int ano [SIZE] [50];
int cpf [SIZE];
int op;
void cadastro();
void pesquisa();
void lista();
int main(void){
cadastro();
lista();
//pesquisa();
}
void lista(){
    int i;
    for(i=0;i<SIZE;i++){
        if(cpf[i]>0){
            printf("\nNome: %s\nEmail: %s\nCPF : %d", nome[i], email[i],cpf[i]);
        }else{
            break;
        }

    }
}
void cadastro(){
static int linha;
do{
printf("\nDigite o nome: ");
scanf("%s", &nome[linha]);
printf("\nNome o email: ");
scanf("%s", &email[linha]);
printf("\nDigite o cpf: ");
scanf("%d", &cpf[linha]);
printf("\nDigite o telefone: ");
scanf("%d", &telefone[linha]);
printf("\nDigite o endereço completo: ");
scanf("%s", &endereco[linha]);
printf("\nDigite o placa: ");
scanf("%d", &placa[linha]);
printf("\nDigite o modelo: ");
scanf("%s", &modelo[linha]);
printf("\nDigite o ano: ");
scanf("%d", &ano[linha]);
printf("\nDigite a marca: ");
scanf("%s", &marca[linha]);
printf("\nDigite 1 para continuar ou 2 para sair\n");
scanf("%d", &op);
linha++;

}while(op==1);

} 

void pesquisa() {
    int cpfPesquisa;
    char emailPesquisa[50];
    int i;
 
    do {
        printf("\nDigite 1 para pesquisar por CPF ou 2 para pesquisar por email");
        scanf("%d", &op);
        switch(op) {
            case 1:
                printf("\nDigite o CPF");
                scanf("%d", &cpfPesquisa);
                for(i=0; i<SIZE; i++) {
                    if(cpf[i]==cpfPesquisa) {
                        printf("\nNome: %s\nEmail: %s\nCPF: %d", nome[i], email[i], cpf[i]);
                    }
                }

            break;
            case 2:
                printf("\nDigite o E-mail");
                scanf("%s", emailPesquisa);
                for (i=0; i<SIZE; i++) {
                    if(strcmp(email[i],emailPesquisa)) {
                        printf("\nNome: %s\nEmail: %s\nCPF : %d", nome[i], email[i],cpf[i]);
                    }
                }
            break;
 
            default:
                printf("\n Opcao invalida");
            break;
        }
        printf("\nDigite 1 para coontinuar pesquisando ");
        scanf("%d", &op);
    } while (op==1);
}