#include<stdio.h>
#include<locale.h>

void zon(int i);

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x;
	printf("Digite um valor inteiro: \n");
	scanf("%i", &x);
	zon(x);
	return(0);
}

void zon(int i){
	if(i != 0){
		printf("%i n�o � igual a zero.", i);
	}
	else{
	("0 � igual a zero.");
	}
}