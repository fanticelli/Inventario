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

  int resultadoA, resultadoB;

  //Exibição.
  printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoA, estoqueA, valorA);
  printf("Produto %s tem estoque %u e o valor unitário é R$ %.2f\n", produtoB, estoqueB, valorB);

  //Comparação estoque.
  resultadoA = estoqueA > estoqueMinimoA;
  resultadoB = estoqueB > estoqueMinimoB;

  printf("\nO produto %s tem estoque minimo de %d\n", produtoA, resultadoA);
  printf("O produto %s tem estoque minimo de %d\n", produtoB, resultadoB);

  //comparação valores.
  printf("O valor total de A (R$ %.2f) é maior que o valor total de B(R$ %.2f): %d\n", 
    estoqueA * valorA, //Impressão do valor de A.
    estoqueB * valorB, //Impressão do valor de B.
    (estoqueA * valorA) > (estoqueB * valorB)); //Comparação dos dois.
}
