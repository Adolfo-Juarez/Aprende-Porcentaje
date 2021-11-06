#include <iostream> //Entrada y salida de datos
#include <cmath> //Operaciones aritméticas avanzadas 

/* 
	ELABORADO POR LOS ALUMNOS CON MATRÍCULA
			213358 Y 213375 
*/

using namespace std;

void Explicacion (float p, float b){ //Función para obtener el porcentaje con los datos dados en entradadeDatos (y explicar al niño) [PROCESO 1]
	
	float r;

	cout << "\n"<<endl;
	cout <<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
	cout << "¿Cómo representar un porcentaje?"<<endl;
	cout <<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n"<<endl;
	cout << "Usted ha ingresado el valor "<<b<<", esto representa el 100%\n"<< endl;
	cout << "Para calcular el "<< p << "% de esta cantidad podemos emplear muchos métodos, los cuales veremos más adelante"<<endl;
	cout << "\n"<< endl;
	cout <<"De igual forma, podemos representar dichos porcentajes en fraccione o decimales\n\nPor ejemplo:"<<endl;
	cout << "Para representar un porcentaje en fracción, sólo basta poner en el numerador el porcentaje deseado y en el denominador el número 100, \npues el porcentaje es una cantidad fraccionaria dividida entre cien (de ahí el nombre, porCENTAJE), para representar tú decisión\nsolo basta escribirlo de la siguiente forma: "<<p<<"/100\n"<<endl;
	r = p/100.00;
	cout << "Para representar un porcentaje en decimal, solo basta realizar la fracción anterior, es decir, dividir el porcentaje entre 100. \nEn este caso sería \n"<<p<<"/100 = "<<r<<"\nde esta forma, obtenemos el porcentaje en su forma decimal."<<endl;
	cout << "\n\nPresione cualquier tecla y después presione enter para continuar: ";
	cin >> r;


}

void ExplainA (float a, float b){ //Función para explicar el procedimiento del modo A
	float r;

	cout << "Para este método multiplicaremos tanto el porcentaje por el número al cual le sacarán el porcentaje y después dividiremos entre 100: \n"<<endl;
	r = a*b;
	cout << a <<" x "<<b<<" = "<<r<<endl;
	cout << r<<"/100";
	r = r/100;
	cout << " = "<<r;
}

void ExplainB (float a, float b){ //Función para explicar el procedimiento del modo B
	float r;

	cout << "Para este método multiplicaremos la base por el decimal del porcentaje cual le sacarán el porcentaje\n"<<endl;
	
	r=a/100;
	cout << a<<"/100 ="<<r<<endl;
	cout << "\n" << endl;
	cout << "Luego multiplicamos por la base"<<endl;
	cout << r<<" x "<<b;
	r = r*b;
	cout << "="<<r<<endl;

}

void Porcentaje (float p, float b){ //Explicación de obtención de los porcentajes
	int eleccion;
	bool Check=false;
	cout << "\n"<<endl;
	cout <<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _"<<endl;
	cout << "¿Cómo calcular el porcentaje de una cantidad?"<<endl;
	cout <<"_ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _ _\n"<<endl;
	cout << "El porcentaje de una cantidad se puede calcular de varias formas, como lo mencionábamos antes:"<<endl;
	do{
		cout << "\n"<<endl;
		cout << " 1) Multiplicar por el porcentaje y dividir entre 100 \n 2) Mulplicar en forma decimal.\n\n¿Cuál deseas aprender?\nPresione 0 para salir"<<endl;
		cin >>eleccion;
		cout << "\n";
	switch (eleccion)
	{
	case 1:
		ExplainA (p,b);
		
		break;
	case 2:
		ExplainB (p,b);
		
		break;
	case 0:
		Check = true;
		break;
	default:
	cout << "Ups, parece que ha ingresado una opción no válida, inténtalo de nuevo"<<endl;
	cout << "\n"<<endl;
		break;
	}
	}while (Check==false);

}

void entradadeDatos (){ //Función para entrada de datos
	int base, porcentaje; //Variable del número a obtener porcentaje y para saber qué porcentaje obtener
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
			cout <<"Por favor ingrese el porcentaje que desea calcular (1-100): ";
			cin >> porcentaje; //Entrada del dato del porcentaje
			if (porcentaje <= 100 && porcentaje >= 1){
				Explicacion (porcentaje, base);
				Check = true;
			}
			else{
				cout << "Ingrese una cifra válida \nInténte un número entre el 1 y el 100";
				cout <<"\n"<<endl; //Salto de línea
			}
		}
	}while (Check==false);
	Porcentaje(porcentaje,base);
}

int main (){
	entradadeDatos();
}