#ifndef PRIORITY
#define PRIORITY

//According to the order of operations, also known as PEMDAS(Parentheses, Exponents, Multiplication and Division, Addition and Subtraction),
//we first perform multiplication and division from left to right, and then perform addition and subtraction from left to right. In short, if same precedence, perform left to right.

int priority(char op) {
	if (op == '^') return 3;
	if (op == '*' || op == '/') return 2;
	if (op == '+' || op == '-') return 1;
	return 0; // for operators '(' and ')'.
}

#endif // PRIORITY