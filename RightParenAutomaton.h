//
// Created by Aaron Zelenski on 9/17/22.
//

#ifndef PROJECT_1_LEXER_RIGHTPAREN_H
#define PROJECT_1_LEXER_RIGHTPAREN_H

#include "Automaton.h"

class RightParenAutomaton : public Automaton
{
public:
    RightParenAutomaton() : Automaton(TokenType::RIGHT_PAREN) {}  // Call the base constructor

    void S0(const std::string& input);
};


#endif //PROJECT_1_LEXER_RIGHTPAREN_H
