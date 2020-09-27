//extesao c e .p e c++ e .cpp
//esta projeto e em c
#include <stdio.h>//standart in / out
#include <stdlib.h>//standart lib biblioteca de utlidades
#include <stdbool.h> //biblioteca para os valores booleanos(true,false)
#include <time.h> //biblioteca para tempo
#include <string>
#include <iostream>
//definindo constantes use #difine
#define TESTE 'andre'
#define NUMERO 456
#define VERDADEIRO true

//funcao principal do pragrama se escreve em minusculo void main para projeto c
void main(){

    std::string palavra;

 srand((unsigned)time(NULL));//unsigned para retornar valor positivo -- NULL deve ser escrito assim mesmo
 printf("Helloworld");//imprime na tela
 printf("\n");
 int a = 5;
 float b =2.3;
 char c ='p';
 bool d = true; //true = 1 , false = 0
 //variavel que recebe o resto da divisão (gera um memro alatorio entre(0 e x)
 int aleatorio = rand() % 4;
 //variavel que recebe o resto da divisão (gera um memro alatorio entre(x e x)
 int aleatoriosegunda = (rand() % 4) + 2;
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
        printf("\n O valor de TESTE: %s \n",TESTE);//usar o %d para bool , pois retorna 2 ou 4
         printf("\n O valor de NUMERO: %d \n",NUMERO);//usar o %d para bool , pois retorna 2 ou 4

 system("pause");//pausa o programa
}
