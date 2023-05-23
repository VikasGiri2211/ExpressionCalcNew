
#include"InputManager.h"
#include<stack>
#include<regex>
#include<string>

bool inputManager::isValidSyntax(std::string input) {


  /*  std::regex pattern("^[a-zA-Z_][a-zA-Z0-9_]*$");
    if (!std::regex_match(input, pattern)) return false;*/
    
    /*if (input.find("=") == std::string::npos) {*/  // means if input doesn't contain = 
        // to check proper nesting of parenthesis
        std::stack<char> s;
        for (int i = 0; i < input.size(); i++) {
            if (input[i] == '(') {
                s.push(input[i]);
            }
            else if (input[i] == ')') {
                if (s.empty() || s.top() != '(') {
                    return false;
                }
                s.pop();
            }
        }
        return s.empty();
    ////}/*
    //else {
    //    for (int i = 0; input[i] != '='; i++) {
    //        if (input[i] == ' ' && input[i + 1] != '=')
    //            return false;
    //    }
    //    int i = 1;
    //    while(input[i] != '=' || input[i] != ' ') {
    //        if (!(input[0] == '_' || isalpha(input[0]))) {
    //            return false;
    //        }
    //        if (input[i] == '_' || isalpha(input[i]) || isdigit(input[i])) {
    //            i++;
    //        }
    //        else {
    //            return false;
    //        }
    //    }
    //    return true;
    //}*/
}
