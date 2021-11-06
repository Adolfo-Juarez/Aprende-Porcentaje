#include <iostream> //Entrada y salida de datos
#include <cmath> //Operaciones aritméticas avanzadas 

/* 
	ELABORADO POR LOS ALUMNOS CON MATRÍCULA
			213358 Y 213375 
*/

using namespace std;

int Explicacion (float a, int b){ //Función para obtener el porcentaje con los datos dados en entradadeDatos (y explicar al niño)
	float r; //Variable para guardar el resultado de la operación

	cout << "Usted ha ingresado el valor "<<a<<", esto representa el 100%"<< endl;
	cout << "para calcular el "<< b << "% de esta cantidad podemos emplear muchos métodos"<<endl;
	cout << "\n"<< endl;
	r=Porcentaje (a,b);

	
}

float Porcentaje (float a, int b){
	float c,d;

	c=a*100;
	d=c/b;

	return d;
}

void entradadeDatos (){ //Función para entrada de datos
	float porcentaje; //Variable para saber qué porcentaje obtener
	int base; //Variable del número a obtener porcentaje
	bool Check; //Resvisor para bucles de error

	cout << "Bienvenido a la calculadora de porcentajes\n"<<endl; //Saludo inicial
	do{
		cout << "Ingrese la cantidad inicial para obtener su porcentaje: ";
		cin >> base;
		if (base <= 0){
			cout << "Ingrese una cifra un poco más grande \nInténte un número mayor a 0";
			cout <<"\n"<<endl; //Salto de línea
		}
		else{
			cout <<"\n"<<endl; //Salto de línea
			cout <<"Por favor ingrese el porcentaje que desea calcular (1-100): ";
			cin >> porcentaje; //Entrada del dato del porcentaje
			if (porcentaje <= 100 && porcentaje >= 1){
				Explicacion (porcentaje, base);
				Check = true;
			}
			else{
				cout << "Ingrese una cifra un poco más grande \nInténte un número mayor a 0";
				cout <<"\n"<<endl; //Salto de línea
			}
		}
	}while (Check==false);
}

int main (){
	entradadeDatos();
}