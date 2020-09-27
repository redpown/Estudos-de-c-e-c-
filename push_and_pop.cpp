
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
#define TAM 10

using namespace std;
// adiconar ao vetor
void pilha_push(int pilha[TAM], int valor, int *topo){

    if(*topo == TAM - 1){
        cout << "Pilha cheia!";
     }else{
     *topo = *topo + 1;
     pilha[*topo] = valor;
     }
}
// retirar do vetor
void pilha_pop(int pilha[TAM], int *valorRetirado, int *topo){

    if(*topo == - 1){
        cout << "Pilha Vazia!";
     }else{
          cout << "Valor Retirado: " << pilha[*topo];
     *valorRetirado = pilha[*topo];
     *topo = *topo - 1;
     }
}

void impirmi_vetor(int vetor[TAM]){
    int cont;
    cout << "\n -------------------";
    for(cont = 0; cont < TAM ; cont++)
     {
        cout << vetor[cont] << " - ";
     }

}

int main(){

    int vetor[TAM] ={0,0,0,0,0,0,0,0,0,0};

    int topo = -1;
    impirmi_vetor(vetor);

    pilha_push(vetor,(1 + TAM),&topo);


    impirmi_vetor(vetor);

return 0;

}
