#include <stdio.h>

// iniciando o projeto
// iniciando a programação

int main(){
//COLOCANDO estrutura de variaveis


char Estado[20];
char CODIGO[5];
char CIDADE[30];
int Populacao;
float AREA;
float PIB;
int PONTOS_TURISTICOS;

// COLOCANDO O TITULO DO PRJETO

printf("Desafio Iniciante\n");
printf("SUPER TRUNFO\n");
printf("Tema Países\n");

// imprimindo opção para o usuário
// escolha do PAIS 
printf("CARTA 1\n");


// IMPRIMINDO ESCOLHA DO ESTADO
printf("Digite o Estado Representado pela letra 'A' ao 'H':\n");
scanf("%s",&Estado);

// imprimindo escolha do codigo da carta
printf("Digite o CODIGO da Carta de 01 ao 04 Com a Letra do Estado: \n");
scanf("%s",&CODIGO);

//Imprimindo o nome da Cidade
printf("Digite o Nome da Cidade: \n");
scanf("%s",&CIDADE);

printf("Digite o Numero da População\n");
scanf("%d",&Populacao);








return 0;
}