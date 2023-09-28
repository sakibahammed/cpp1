#include <iostream>
#include <stack>
#include <string>



class ParenthesesChecker {
public:
    ParenthesesChecker(const std::string& expression) : expression_(expression) {}

    bool areParenthesesBalanced() {
        std::stack<char> parenthesesStack;

        for (char ch : expression_) {
            if (isOpeningParenthesis(ch)) {
                parenthesesStack.push(ch);
            } else if (isClosingParenthesis(ch)) {
                if (parenthesesStack.empty() || !isMatchingPair(parenthesesStack.top(), ch)) {
                    return false; // Unmatched or mismatched closing parenthesis
                }
                parenthesesStack.pop();
            }
        }

        return parenthesesStack.empty(); // If the stack is empty, all parentheses were matched.
    }

private:
    std::string expression_;

    bool isOpeningParenthesis(char ch) {
        return ch == '(' || ch == '{' || ch == '[';
    }

    bool isClosingParenthesis(char ch) {
        return ch == ')' || ch == '}' || ch == ']';
    }

    bool isMatchingPair(char open, char close) {
        return (open == '(' && close == ')') || (open == '{' && close == '}') || (open == '[' && close == ']');
    }
};

int main() {
    std::string expression;
    std::cout << "Enter an expression with parentheses: ";
    std::cin >> expression;

    ParenthesesChecker checker(expression);

    if (checker.areParenthesesBalanced()) {
        std::cout << "Balanced." << std::endl;
    } else {
        std::cout << "Not Balanced." << std::endl;
    }

    return 0;
}
