#include <string.h>
#include <stdio.h>

int quant=0, vect[15], valor;

void render(){
	
	printf("\n Rendering...\n");
	
	for(int i=0;i<quant;i++){
		for( int j=0;j<vect[i];j++)
		{
			printf("*");
		}
		printf("(%i) \n",vect[i]);
	}
	}
	
int main() {
	int count=0;
	printf("Quantos valores deseja inserir?");
	scanf("%i",&quant);
	while(quant<0 || quant>15){
		printf("Numero acima invalido, insira um novo");
		scanf("%i",&quant);
	}
	
	while(count<quant){
		printf("\n Introduza uma valor entre 1 e 50: ");
		scanf("%i",&valor);
		while(valor>50 || valor<0){
			printf("Numero acima de 50, insira um novo");
			scanf("%i",&valor);
		}
		vect[count]=valor;
		count++;
	}
	render();
	
	
}
	

