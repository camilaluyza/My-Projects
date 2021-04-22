#include<stdio.h>
#include<stdlib.h>


int numeros[5];

//Função ,void
void entrada(){
	for( int i = 0;i < 5;i++){
		printf("Digite um numero : ");
		scanf("%d",&numeros[i]);
	}
	
}
// Tipada, int (inteiro)
int calcularSomaVetor(){
	  int soma = 0;
	  for( int i = 0; i <5; i++){
	  	soma = soma + numeros[i];
	  }
	return soma;
}

int calcularMediaVetor(){
	int media = 0;
	media = calcularSomaVetor()/5;
	return media;
}

void saida(){
	
	printf("o valor da soma :%d \n",calcularSomaVetor());
	printf("O va
	lor da media : %d \n",calcularMediaVetor());
	
}

main(){
	entrada();
	saida();
	
	system("pause");
}

