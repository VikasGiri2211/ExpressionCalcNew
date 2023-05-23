
#include<stack>
#include<sstream>

#include"OperationManager.h"
#include"Operator.h"
#include"Priority.h"


double operationManager::evaluate_expression(std::string expression) {
	std::stack<double> values;
	values.push(0);
	std::stack<char> operators;

	for (int i = 0; i < expression.length(); i++) {
		if (expression[i] == ' ') continue;

		if (isdigit(expression[i]) || expression[i] == '.') {
			std::stringstream ss;
			ss << expression[i];
			int j = i + 1;
			while (j < expression.length() && (isdigit(expression[j])) || expression[j] == '.') {
				ss << expression[j];
				j++;
			}
			i = j - 1; // j - 1 because we also going to do i++ in end here also.
			double value;
			ss >> value;
			values.push(value);
		}
		else if (expression[i] == '(') {
			//values.push(0);        but adding to code gives error even in normal bracketed expressions.
			operators.push(expression[i]);
		}
		else if (expression[i] == ')') {
			while (!operators.empty() && operators.top() != '(') {
				char op = operators.top();
				operators.pop();
				if (!values.empty()) {
				double b = values.top();
				values.pop();
				double a = values.top();
				values.pop();
				values.push(apply_operator(op, b, a));
				}
			}
			operators.pop();
		}
		else {
			while (!operators.empty() && priority(operators.top()) >= priority(expression[i])) {
				char op = operators.top();
				operators.pop();
				if (!values.empty()) {
				double b = values.top();
				values.pop();
				double a = values.top();
				values.pop();
				values.push(apply_operator(op, b, a));
				}
			}
			operators.push(expression[i]);
		}
	}
	while (!operators.empty()) {
		char op = operators.top();
		operators.pop();
		if (!values.empty()) {
		double b = values.top();
		values.pop();
		double a = values.top();
		values.pop();
		values.push(apply_operator(op, b, a));
		}
	}
	return values.top();
}