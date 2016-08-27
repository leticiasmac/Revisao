#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	int matriz[4][4], j = 0, k = 0; //criacao de variaveis
	
	srand((unsigned)time(NULL)); //numeros aleatorios
	
	printf("MATRIZ ORIGINAL: \n\n"); //imprime a matriz
	
	for(j = 0; j < 4; j++) //laco que varre a linha
	{
		for(k = 0; k < 4; k++) //laco que varre a coluna
		{
			matriz[j][k] = k; //insere o valor da posicao atual da matriz
			printf("%02d ", matriz[j][k]); //imprime o valor da posicao atual da matriz
		}
		printf("\n"); //quebra a linha
	}
	
	printf("\n\n");
	printf("DIAGONAL PRINCIPAL:\n"); //imprime uma mensagem de identificacao

    for (j = 0; j < 4; j++) //efetua a varredura da matriz
	{      
        for (k = 0; k < 4; k++)
		{
           if (k == j)
			{                   
            	printf("%02d ",matriz[j][k]);
            }
        }
        printf("\n\n");
    }
    
    printf("\n\n");
	printf("OS OUTROS ELEMENTOS SAO:\n"); //imprime uma mensagem de identificacao
	
    for (j = 0; j < 4; j++) //efetua a varredura da matriz
	{      
        for (k = 0; k < 4; k++)
		{
        	if (k != j)
			{                   
        	    printf("%02d ",matriz[j][k]);
            }
            
            else
			{                   
        	    printf("-- ", matriz[j][k]);
            }
        }
        printf("\n\n");
    }

	return 0; //retorna 0
}
