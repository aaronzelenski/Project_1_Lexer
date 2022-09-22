//
// Created by Aaron Zelenski on 9/17/22.
//

#ifndef PROJECT_1_LEXER_MULTIPLY_H
#define PROJECT_1_LEXER_MULTIPLY_H

#include "Automaton.h"

class MultiplyAutomaton : public Automaton
{
public:
    MultiplyAutomaton() : Automaton(TokenType::MULTIPLY) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //PROJECT_1_LEXER_MULTIPLY_H
