//extesao deporjetos c e .c e projetos c++ e .cpp
//esta projeto e c++ ou seja .cpp
//sempre fazer um build antes
#include <stdio.h>//standart in / out
#include <stdlib.h>//standart lib biblioteca de utlidades
#include <stdbool.h> //biblioteca para os valores booleanos(true,false)
#include <time.h> //biblioteca para tempo
#include <string.h>
#include <string>
#include <iostream>
//alocacao de memoria com c++
#include <new>
//para salvar em arquivos
#include <fstream>
//biblioteca de outro arquivo usar aspas duplas ""
#include "funcao.h"
//definindo constantes use #difine
#define TESTE 'andre'
#define NUMERO 456
#define VERDADEIRO true



using namespace std;//para uso direto

struct pessoa{
 char nome[256];
 string nomes;
 int idade = 0;
};


//as funcoes sao procuradas em cima do main
int retornarDez(){
 printf("retornar 10");
 return 10;
}

//funcao em ponterio vetor dinamico me c
int* alocaVetor(int tamanho){
 int *aux;
 //(int*) faz um cast
 //malooc funcao para alocar memoria
 //sizeof pega o tamanho padrao de int
 aux = (int*) malloc(tamanho * sizeof(int));
 return aux;
}

//funcao com ponteiro
void retornarVinte(int *vinte){
 *vinte = *vinte + 20;
}

//funcao modifica vetor com ponteiro
//todo o vetor ou matriz e um ponteiro
void mostrarVetor(int *vetor, int tamanho){
    int i = 0;
    for(i = 0; i < tamanho; i++){
        printf("\nvetor valor: %d \n",vetor[i]);
    }
}

//funcao modifica vetor com ponteiro
//todo o vetor ou matriz e um ponteiro
void modificarVetor(int *vetor, int tamanho){
    int i = 0;
    for(i = 0; i < tamanho; i++){
        vetor[i] = vetor[i] + 1000;
        printf("\nvetor valor: %d \n",vetor[i]);
    }
}
//a funcao pode ser declarada e depois definida depois do main
int retornarDoze();
//funcao principal do pragrama se escreve em minusculo int main para projeto cpp com return
int main(){


//ler aquivo
    ofstream aquivodesaida;
    aquivodesaida.open("texte.txt",std::ios_base::app);
    aquivodesaida << "andre e youko \n";
    aquivodesaida.close();


    FILE *files;
    int filec;
    char fileConteudo[256];

    files = fopen("texte.txt","r");
    //imprimeindo em c
    if (files){
        int conto = 0;
        while((filec = getc(files)) != EOF /*end of file EOF*/){
            printf("%c",filec);
        }
    }
    //imprimeindo em c++
    ifstream input("texte.txt");
    string textolido;

    for(string linha ; getline(input,linha);){
            textolido += linha;
    //sempre q a saida for em string ussa cout ou cin <<
            cout << textolido;
    }
    //limoar o arquivo
    aquivodesaida.open("texte.txt");
    aquivodesaida << " ";
    aquivodesaida.close();

  // em c
  struct pessoa pessoa1;
  struct pessoa pessoaVetor[3];

  //em c++
  pessoa *pessoas = new pessoa;
  //em c+++
  pessoa *listapessoascpp = new pessoa[3];

   //adionar valores em c++ precisa usar -> para acesar o objeto em ponteiro e para retornar usar o .
  pessoas->idade = 50;
  pessoas->nomes = "Youko";

  //  std::string palavra;//uso explicito da bibliotheca string
  string palavra;//uso direto da bibliotheca string

 srand((unsigned)time(NULL));//unsigned para retornar valor positivo -- NULL deve ser escrito assim mesmo
 printf("Helloworld");//imprime na tela
 printf("\n");
 int a = 5,dez,doze;
 //matriz ou vetor
 int matriz[2][2];
 //matriz de ponteiros


 int vetor[3];
 vetor[0]= 990;
 vetor[1]= 991;
 vetor[2]= 992;

 //em c usar . para acessar o objeto
 strcpy(pessoa1.nome,"andre");
 //pessoa1.nome ='andre';
 pessoa1.idade = 30;

 int *vetorPonteiro, tamanho,contar;

 float b =2.3;
 char c ='p';
 bool d = true; //true = 1 , false = 0
 //variavel que recebe o resto da divisão (gera um memro alatorio entre(0 e x)
 int aleatorio = rand() % 4;
 //variavel que recebe o resto da divisão (gera um memro alatorio entre(x e x)
 int aleatoriosegunda = (rand() % 4) + 2;

 int *ponteiro;
// operador &  que pega posiçao da memoria
 ponteiro = &a;
 // * pode ser lido como "CONTEUDO APONTADO POR"
 *ponteiro = 40;

 dez = retornarDez();

 doze = retornarDoze();

 retornarVinte(&a);

 //todo o vetor ou matriz e um ponteiro
 // nao precisa utilizar operador &  que pega posiçao da memoria
 mostrarVetor(vetor,3);

 modificarVetor(vetor,3);

 printfdeoutroarquivo();

 printf("\n Digite o tamnho do vetor");//%d para int
 scanf("%d",&tamanho);
 vetorPonteiro = alocaVetor(tamanho);

  for(contar = 0; contar < tamanho; contar++){
        vetorPonteiro[contar] =  1;
        printf("\n alocaVetor: %d \n",vetorPonteiro[contar]);
    }
//funcao para limpar a memoria alocada
free(vetorPonteiro);

int *vetorcpp = new int [tamanho];
int **matrizponteiro = (int**) new int[tamanho];

  for(contar = 0; contar < tamanho; contar++){
        vetorcpp[contar] =  2;
        printf("\n vetorcpp: %d \n",vetorcpp[contar]);
    }

      for(contar = 0; contar < tamanho; contar++){
        matrizponteiro[contar] =(int*)  new int[tamanho];
      }

 printf("%d",a);//%d coringa para variaveis
  printf("\n");


  printf("\n");
  printf("%d",a);//%d coringa para variaveis
  printf("\n");

 scanf("%d",&a);//%d de decimal ,le o valor digitado e adciona na variavel ,antes da variavel usar &
 scanf("%f",&b);//%f de float le o valor digitado e adciona na variavel ,antes da variavel usar &
 scanf(" %c",&c);//%c de char, precisa de um sapaco antes de %c ,le o valor digitado e adciona na variavel ,antes da variavel usar &

   printf("\n O valor de int a: %d",a);//%d para int
    printf("\n O valor de float b: %1.f",b);//%f para float, arendondar %1.f
     printf("\n O valor de char c: %c \n",c);//%c para char
     printf("\n O valor de boolean d: %d \n",d);//usar o %d para bool , pois retorna 1 ou 0
      printf("\n O valor de aleatorio: %d \n",aleatorio);//usar o %d para bool , pois retorna 1 ou 0
       printf("\n O valor de aleatoriosegunda: %d \n",aleatoriosegunda);//usar o %d para bool , pois retorna 2 ou 4
     //   printf("\n O valor de TESTE: %s \n",TESTE);//usar o %d para bool , pois retorna 2 ou 4
     //    printf("\n O valor de NUMERO: %d \n",NUMERO);//usar o %d para bool , pois retorna 2 ou 4
/*
uso explicito da contante de entrada e saida
     std::cin >> palavra;
     std::cout << palavra;
*/
//uso direto da contante de entrada e saida
          cin >> palavra;
          cout << "\n a palavra e: " << palavra <<"\n";
 system("pause");//pausa o programa
 return 0;
}
//tb posso declarar a funcao acima do main
//chamar dentro do main
// e definir a funcao depois do main exemplo abaixo
int retornarDoze(){
 printf("retornar 10");


 return 10;
}
