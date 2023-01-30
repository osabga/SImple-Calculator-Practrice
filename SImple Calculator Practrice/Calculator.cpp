#include "Calculator.h"

double Calculator::Calculate(double x, char operador, double y)
{
	switch (operador)
	{
	case '+':
		return x + y;
	case '-':
		return x - y;
	case '*':
		return x * y;
	case '/':
		return x / y;
		
	default:
		return 0.0;
	}
}
