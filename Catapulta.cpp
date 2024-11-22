#include <iostream>
#include <string>
#include <cmath>

using namespace std;


int main(){
	// Constantes 
	double G = 9.81;


	//Inputs del usuario 
	double masa_A = 5;
	double masa_B = 2;
	

		// Datos de Resorte
		double k;
		double x;
	cout << "Bienvenido jugador"<< endl;
	cout << "tu objetivo es jugar con los datos de un resorte para lanzar un bloque y que choque con otro bloque en reposo"<< endl;
	
	while (true){

		
		cout << "Tu objetivo es que la velocidad resultante del choque inelastico sea igual o mayor a 2m/s" << endl;

		cout << "La masa del bloque A a lanzar es de "<< masa_A << endl;
		

		cout << "La masa del bloque B a chocar es de " << masa_B << endl;
		

		cout << "¿Cuánto quieres que sea el coeficiente del resorte" << endl;
		cin >> k;

		cout << "¿Cuánto vas a comprimir el resorte" << endl;
		cin >> x;

		cout <<"*Sonido de resorte comprimiendose" << endl;

		// Calculo de la energía potencial elastica del resorte

		double Us= 0.5*k*(x*x); // Calculo de la energía potencial elastico en el resorte 
		cout << "Con estos valores, la energía potencial en el resorte es de " << Us << "J" << endl;

		// Utilizamos calculo de conservación de la energía delta de K - delta de Us = 0

		

		double velocidad_BloqueA = sqrt((k*(x*x)/masa_A)); // Velocidad del Bloque A en su trayectoria utilizando conservación de la energía
		cout << "La Velocidad del bloque A una vez disparado es " << velocidad_BloqueA << " m/s" << endl;

		double Cinetica = 0.5*masa_A*(velocidad_BloqueA*velocidad_BloqueA);
		cout << "La energía cinetica es de " << Cinetica << "j" << endl;

		// Calcular el choque

		double velocidad_Vc = (masa_A*velocidad_BloqueA)/(masa_A+masa_B); // Calculo de choques

		if(velocidad_Vc > 2){
			cout << "¡Has Ganado!, La velocidad del choque inelastico es de " << velocidad_Vc  << "m/s" << endl;
			break;
		}
		else if(velocidad_Vc > 0.5){
		
		cout << "Con el choque, los bloque se movieron a una velocidad de " << velocidad_Vc  << " m/s "<< endl;
		cout << "Para ganar, la velocidad debe de superar los 2 m/s" << endl;
		}

		else{
			cout << "El choque de los bloques no genero una velocidad notable, intenta ajustar los datos del resorte" << endl;
			cout << "Para ganar, la velocidad debe de superar los 2 m/s" << endl;
		}

		
	}
	return 0;
}