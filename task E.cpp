#include <iostream>
#include <stack>
#include <sstream>
#include <string>

using namespace std;

int performOperation(int a, int b, char op) {
    switch (op) {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    default:
        return 0;
    }
}

int main() {
    string expression;
    getline(cin, expression);

    istringstream iss(expression);
    stack<int> operands;

    string token;
    while (iss >> token) {
        if (token == "+" || token == "-" || token == "*") {
            int b = operands.top();
            operands.pop();
            int a = operands.top();
            operands.pop();
            int result = performOperation(a, b, token[0]);
            operands.push(result);
        }
        else {
            operands.push(stoi(token));
        }
    }

    cout << operands.top() << endl;

    return 0;
}