//
// Created by Aaron Zelenski on 9/17/22.
//

#ifndef PROJECT_1_LEXER_LEFTPAREN_H
#define PROJECT_1_LEXER_LEFTPAREN_H

#include "Automaton.h"

class LeftParenAutomaton : public Automaton
{
public:
    LeftParenAutomaton() : Automaton(TokenType::LEFT_PAREN) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //PROJECT_1_LEXER_LEFTPAREN_H
