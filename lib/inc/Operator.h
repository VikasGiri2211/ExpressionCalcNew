#ifndef OPERATOR
#define OPERATOR


#include"Operations.h"

#include"Addition.h"
#include"Subtraction.h"
#include"Multiplication.h"
#include"Division.h"
#include"Power.h"

Operations<double>* Opr;

double apply_operator(char op, double b  ,  double a ) {
	switch (op) {
	case '+':
		Opr = new Addition<double>(a, b);
		break;
	case '-':
		Opr = new Subtraction<double>(a, b);
		break;
	case '*':
		Opr = new Multiplication<double>(a, b);
		break;
	case '/':
		Opr = new Division<double>(a, b);
		break;
	case '^':
		Opr = new Power<double>(a, b);
		break;
	default:
		return 0.0;
	}

	return Opr->perform();
}


#endif // OPERATOR