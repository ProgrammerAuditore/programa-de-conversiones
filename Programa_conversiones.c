/*
	Name: Victor J. Maximo Abundio
	Copyright: Tec Vallarta
	Author: Victor J. Maximo Abundio
	Date: 31/03/19 01:32
	Description: Convertir numeros decimales a binarios
*/
#include <stdio.h>

// Funcion para convertir decimales a Binarios
void fnDecimal_Binario(int numeroDecimal){
	int numeroResiduo, i=1;

	printf("En binario es: ");
	
	while(numeroDecimal > 0){
		numeroResiduo = numeroDecimal%2;
		numeroDecimal = numeroDecimal/2;
		//if(i > 2) i = i*2 - 2;
		//printf("%d -- %d \n", i,numeroResiduo);
		printf("%d",numeroResiduo);
		//i++;
	}
	
	printf("\n");
}

// Funcion para convertir decimales a octal
void fnDecimal_Octal(int numeroDecimal){
	int numeroResiduo, octal[30], i=0;

	printf("En Octal es: ");
	
	while(numeroDecimal > 0){
		numeroResiduo = numeroDecimal%8;
		numeroDecimal = numeroDecimal/8;
		octal[i]= numeroResiduo;
		//printf("%d -- %d\n",numeroDecimal, numeroResiduo);
		i++;
	}
		
	for(i -= 1; i >= 0; i--){
		printf("%d",octal[i]);
	}	
	
	printf("\n");
}

// Funcion para convertir decimales a hexadecimal
void fnDecimal_Hexadecimal(int numeroDecimal){
	int numeroResiduo, hexadecimal[30], i=0,nE=0;

	printf("En Hexadecimal es: ");
	
	while(numeroDecimal > 0){
		numeroResiduo = numeroDecimal%16;
		numeroDecimal = numeroDecimal/16;	
		hexadecimal[i]= numeroResiduo;	
		//printf("%d -- %d\n",numeroDecimal, numeroResiduo);
		i++;
	}
		
	for(i -= 1; i >= 0; i--){	
		switch(hexadecimal[i]){
			case 10: printf("%s","A"); break;
			case 11: printf("%s","B"); break;
			case 12: printf("%s","C"); break;
			case 13: printf("%s","D"); break;
			case 14: printf("%s","E"); break;
			case 15: printf("%s","F"); break;
			default:
				printf("%d",hexadecimal[i]);
		}
		
	}
	
	printf("\n");
}


// funcion principal
int main(){
	
	int inD;
	printf("Introduzca un numero decimal: ");
	scanf("%d",&inD);
	fnDecimal_Binario(inD);
	fnDecimal_Octal(inD);
	fnDecimal_Hexadecimal(inD);
	
	system("pause");
	return 0;
}
