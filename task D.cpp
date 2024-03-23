#include <iostream>
#include <stack>
#include <string>

bool isBalanced(std::string brackets) {
    std::stack<char> s;

    for (char bracket : brackets) {
        if (bracket == '(' || bracket == '[' || bracket == '{') {
            s.push(bracket);
        }
        else {
            if (s.empty()) {
                return false;
            }

            char top = s.top();
            if ((bracket == ')' && top == '(') ||
                (bracket == ']' && top == '[') ||
                (bracket == '}' && top == '{')) {
                s.pop();
            }
            else {
                return false;
            }
        }
    }

    return s.empty();
}

int main() {
    std::string brackets;
    std::cin >> brackets;

    if (isBalanced(brackets)) {
        std::cout << "yes" << std::endl;
    }
    else {
        std::cout << "no" << std::endl;
    }

    return 0;
}