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
printf("Digite o CODIGO da Carta de 01 ao 04 jumto Com a Letra do Estado: \n");
scanf("%s",&CODIGO);

//Imprimindo o nome da Cidade
printf("Digite o Nome da Cidade: \n");
scanf("%s",&CIDADE);

//Imprimindo numero população
printf("Digite o Numero da População\n");
scanf("%d",&Populacao);

//Imprimindo a ÁREA 
printf("Digite a ÁREA \n");
scanf("%f",&AREA);

//Imprimindo o PIB
printf("Digite o PIB\n");
scanf("%f",&PIB);

//Imprimindo o Numero de Pontos Turísticos
printf("Digite o Numero de Pontos Turísticos\n");
scanf("%d",&PONTOS_TURISTICOS);

//Imprimindo Resultados totais
printf("CARTA 1\n");

printf("Estado:%s\n",Estado);

printf("Código:%s\n",CODIGO);

printf("Nome da Cidade:%s\n",CIDADE);

printf("Populção:%d\n",Populacao);

printf("ÁREA:%f\n",AREA);

printf("PIB:%f\n",PIB);

printf("Pontos Turísticos:%d\n",PONTOS_TURISTICOS);


// INICINADO Carta 2
printf("CARTA 2\n");

printf("Digite o Estado Representado pela letra 'A' ao 'H'\n");
scanf("%s",&Estado);

printf("Digite o Código da Carta de 01 ao 04  jumto com a Letra do Estado:\n");
scanf("%s",&CODIGO);

printf(" Digite o Nome da Cidade:\n");
scanf("%s",&CIDADE);

printf("Digite o Numero da Populção:\n");
scanf("%d",&Populacao);

printf("Digite a ÁREA:\n");
scanf("%f",&AREA);

printf("Digite o PIB:\n");
scanf("%f",&PIB);

printf("Digite o Numero de Pontos Turísticos:\n");
scanf("%d",&PONTOS_TURISTICOS);

//Imprimindo Resultados totais Carta 2
printf("CARTA 2\n");

printf("Estado:%s\n",Estado);

printf("Código:%s\n",CODIGO);

printf("Nome da Cidade:%s\n",CIDADE);

printf("População:%d\n",Populacao);

printf("ÁREA:%f\n",AREA);

printf("PIB:%f\n",PIB);

printf("Pontos Turísticos:%d\n",PONTOS_TURISTICOS);



return 0;
}