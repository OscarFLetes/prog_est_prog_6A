/*Autor: Oscar Eduardo Fletes Ixta, realizado: 10/02/2022
	Programa para una tienda de Arduinos, en dicha tienda existen promociones
		-si se compran minimo 10 arduinos, tienen 25% descuento
		-Si se compran minimo 5 ardunos, tienen 15% descuento
	cada arduino tiene un costo de $350.00
	El programa pedira la cantidad de arduinos y calculara el total a pagar 
	Autor: Oscar Eduardo Fletes Ixta
	Escuela: UVM Campus Lomas Verdes
	Materia : Programcion Estructurada
	CICLO: 01/2022

	Programa en lenguaje c que muestra el uso de:
		-Declaracion de variables 
		-Variables del tipo flotate, int
		-scanf
		-Operacones aritmeticas 
		-Uso de condiciones con el operador ternario
		-printf para monstrar los valroes de las variables

	Objetivo:
	Mostrar el uso de variables flotantes y int, como declararlas, pedirlas por teclado, usar condiciones,
	realizar operaciones aritmeticas e imprimirla.

	Breve descripcion:
	El programa pide como entrada 1 variable de tipo int (cantidad de arduinos),
	calcula el tota la pagar, si se compran minimo 10 arduinos, tienen 25% descuento, 
	o si se compran minimo 5 arduinos, tienen 15% descuento, cada arduino tiene un costo de $350.00
	*/
	
#include<stdio.h>

int main(){
	//Enttrada 
	int arduinos; //variable numero entero 
	float total, descuento=0; //variable con decimal
	//Variables 
	printf("Introduce la cantidad de arduinos: "); //imrpime mensaje
	scanf("%d", &arduinos); //lee el numero insertado por el teclado
	//Proceso
	total=arduinos*350.00; //calcula los arduinos insertados por el costo
	if(arduinos>=5){ //validacion si arduino es mayor o igual a 5
		descuento=total*0.15;	
	}
	else{ //si no se cumple la condicion se realiza la sigueiente ecuacion 
		descuento=total*0.05;
	}
	//Salida 
	printf("Subtotal:\t $%10.2f\n",total); //salida del subtotal
	printf("Descuento:\t-$%10.2f\n", descuento); // salida de la ecuacion descuento
	printf("\t\t------------\n"); //Tabulaciones y formato
	printf("Total:\t\t $%10.2f", total-descuento ); // salida del total, usando la variables total menos descuento
	
	return 0;
}
