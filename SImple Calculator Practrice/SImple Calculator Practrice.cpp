// SImple Calculator Practrice.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "Calculator.h"
#include <iostream>
using namespace std;





int main()
{
    //Declaracion de variables.
    double x{};
	double y{};
    double result{};
	char operador{};
    
    cout << "Buenos dias a la aplicacion de calculadora." << endl<< endl;
    cout << "Ingrese la operacion que desea hacer sin espacio y utilizando cualquier de los siguientes oepradores:" << endl;
    cout << "Multiplicacion: *" << endl;
    cout << "Division; /" << endl;
    cout << "Suma: +" << endl;
    cout << "Resta: -" << endl;

    

    Calculator c;
    
    while (true)
    {
        cin >> x >> operador >> y;
		if ((y == 0) && (operador == '/'))
		{
			cout << "No se puede dividir entre 0" << endl;
            cout << "Intentelo nuevamente" << endl;
			continue;
		}
		result = c.Calculate(x, operador, y);
		cout << "El resultado es: " << result << endl;
    }
    
	return 0;
    
}

