#include <stdio.h>
#include <string.h> 
#define MaxCadastro 5

typedef struct {
    char Territorio[50];  
    char CorrExercito[50];      
    int NumTropas; 
} DesafioNovato;

DesafioNovato DN[MaxCadastro];

int itemCadastrado = 1;

int main() {
 
    //cadastro 
	for (int i = 0; i < 5; i++) {
		  
        printf(" ---Cadastrando territorio---- %i\n", itemCadastrado);
		
        printf("Nome do Territorio:\n");		
        scanf(" %[^\n]", DN[i].Territorio);		
		
		printf("Cor do Exercito (ex: Azul, Verde, Branco):\n");		
        scanf(" %[^\n]", DN[i].CorrExercito);		
		
        printf("Numero de tropas:");		
        scanf("%d", &DN[i].NumTropas);
		
		itemCadastrado++;	
    }
	
	itemCadastrado = 1;
	
     printf("============================");
	 printf("MAPA DO MUNDO - ESTADO ATUAL");
	 printf("============================");
	
	//listar
	for (int i = 0; i < 5; i++) {
		  
        printf(" ---Territorio---- %i\n", itemCadastrado);
				
        printf("Nome: %s\n", DN[i].Territorio);
		printf("Dominado por: %s\n", DN[i].CorrExercito);
		printf("Tropas: %i\n", DN[i].NumTropas);
		
		itemCadastrado++;
			
	}

    return 0;
}
