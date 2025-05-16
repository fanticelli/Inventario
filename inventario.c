#include <stdio.h>

int main(){

  //declaração das var.
  char produtoA[30] = "Produto A";
  char produtoB[30] = "Produto B";

  unsigned int estoqueA = 1000;
  unsigned int estoqueB = 2000;

  float valorA = 10.50;
  float valorB = 20.40;

  unsigned int estoqueMinimoA = 500;
  unsigned int estoqueMinimoB = 1000;

  double valorTotalA;
  double valorTotalB;

  //Exibição.
  printf("Produto %s tem estoque %u e o valor unitário é %f\n", produtoA, estoqueA, valorA);
  printf("Produto %s tem estoque %u e o valor unitário é %f\n", produtoB, estoqueB, valorB);
}
