/* METODO DE ORDENAMIENTO POR SELECCION */

#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numeros[] = {3,2,4,1,5};
	int i, j, aux, min; // ITERADORes, AUXILIAR, MINIMO
	
	for(i=0;i<5;i++){
		min = i;
		for(j=i+1;j<5;j++){
		if(numeros[j] < numeros[min]){
			min = j;
		}
		
		}		
		aux = numeros[i];
		numeros[i] = numeros[min];
		numeros[min] = aux;
	}
	
	cout << "Orden Ascendente:: ";
	for(i=0;i<5;i++){
		cout << numeros[i] << "  ";
	}	
		
	cout << "\nOrden Descendente: "; 
	for(i=4;i>=0;i--){
		cout << numeros[i] << "  ";
	}
	
	
	getch();
	return 0;
}
